// Copyright (c) 2023 FZI Forschungszentrum Informatik
// SPDX-License-Identifier: Apache-2.0

#include "OpenDRIVE_Generator.h"

// Sets default values
AOpenDRIVE_Generator::AOpenDRIVE_Generator()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AOpenDRIVE_Generator::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AOpenDRIVE_Generator::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void AOpenDRIVE_Generator::ImportOpenDRIVE(float sample_rate, bool modify_eps, FVector center, float scale, bool flat, FString filename = "C:\\OpenDRIVE\\KA-Oststadt.xodr")
{
	// Create config with load parameters
	UE_LOG(LogTemp, Log, TEXT("loaded libOpenDRIVE module"));
	odr::OpenDriveMapConfig odr_config;
	odr_config.with_lateralProfile = true;
	odr_config.with_laneHeight = true;
	odr_config.with_road_objects = true;
	odr_config.center_map = true;
	odr_config.abs_z_for_for_local_road_obj_outline = false;

	// Load the OpenDRIVE file
	odr::OpenDriveMap odr(TCHAR_TO_UTF8(*filename), odr_config);
	step_size = sample_rate;
	if (Roads.Num() > 0)
	{
		Roads.Empty();
	}
	x_offset = odr.x_offs;
	y_offset = odr.y_offs;

	// Iterate through roads
	for (odr::Road road : odr.get_roads())
	{
		FOpenDRIVE_Generator_Road m_road;
		m_road.id = FCString::Atoi(UTF8_TO_TCHAR(road.id.c_str()));
		m_road.length = road.length;
		m_road.connections = FVector2D(FCString::Atoi(UTF8_TO_TCHAR(road.predecessor.id.c_str())), FCString::Atoi(UTF8_TO_TCHAR(road.successor.id.c_str())));
		m_road.junction = UTF8_TO_TCHAR(road.junction.c_str());
		odr::CubicSpline lane_offset = road.lane_offset;

		// Fetch offset
		for (double s_road = 0.f; s_road < road.length; s_road = s_road + step_size)
		{
			m_road.lane_offset.Add(lane_offset.get(s_road));
		}

		// Iterate through lanes
		for (odr::LaneSection lanesec : road.get_lanesections())
		{
			int road_s0 = 0.f;
			for (odr::Lane lane : lanesec.get_lanes())
			{
				road_s0 += lanesec.s0;
				FOpenDRIVE_Generator_Lane m_lane;
				m_lane.id = lane.id;
				m_lane.type = UTF8_TO_TCHAR(lane.type.c_str());
				m_lane.s0 = lanesec.s0;
				m_lane.length = road.get_lanesection_end(lanesec);
				m_lane.lane_pairing.Add(FVector2D(lane.predecessor, lane.successor));

				for (double s = lanesec.s0; s < road.get_lanesection_end(lanesec); s = s + step_size)
				{
					if (lane.id != 0)
					{
						float eps = 1.f;
						float t = lane.id > 0 ? lane.inner_border.get(s) + lane.lane_width.get(s) / 2 : lane.inner_border.get(s) - lane.lane_width.get(s) / 2;

						odr::Vec3D surface_pt = road.get_surface_pt(s, t);
						FVector t_pt = FVector(surface_pt[0], surface_pt[1], surface_pt[2]);

						m_lane.inner_offset.Add(lane.inner_border.get(s));
						m_lane.outer_offset.Add(lane.outer_border.get(s));
						m_lane.width.Add(lane.lane_width.get(s));
						m_lane.nav_line.Add(t_pt);
					}
				}

				// Reference line
				odr::Line3D ref = road.ref_line.get_line(lanesec.s0, road.get_lanesection_end(lanesec), step_size);
				for (odr::Vec3D ref_pt : ref)
				{
					FVector p = FVector(ref_pt[0] * scale, ref_pt[1] * scale, ref_pt[2] * scale);
					m_lane.centerline.Add(p);
				}

				if (road.get_lanesection_end(lanesec) < step_size)
				{
					m_lane.inner_offset.Add(lane.inner_border.get(road.get_lanesection_end(lanesec)));
					m_lane.outer_offset.Add(lane.outer_border.get(road.get_lanesection_end(lanesec)));
					m_lane.width.Add(lane.lane_width.get(road.get_lanesection_end(lanesec)));

					float t = lane.id > 0 ? lane.inner_border.get(step_size) + lane.lane_width.get(step_size) / 2 : lane.inner_border.get(step_size) - lane.lane_width.get(step_size) / 2;
					/*
					float eps = 0.f;
					if (modify_eps)
					{
						eps = (lane.id > 0 ? lane.lane_width.get(road.get_lanesection_end(lanesec)) / 2.f : lane.lane_width.get(road.get_lanesection_end(lanesec)) / -2.f);
					}
					else
					{
						eps = lane.inner_border.get(road.get_lanesection_end(lanesec));
					}
					odr::Vec3D surface_pt = road.get_surface_pt(road.get_lanesection_end(lanesec), eps);
					if (flat)
					{
						t_pt = FVector((surface_pt[0] * scale) + center.X, (-1 * surface_pt[1] * scale) + center.Y, center.Z);
					}
					else
					{
						t_pt = FVector((surface_pt[0] * scale) + center.X, (-1 * surface_pt[1] * scale) + center.Y, (surface_pt[2] * scale) + center.Z);
					}
					*/
					//m_lane.centerline.Add(t_pt);

					odr::Vec3D surface_pt = road.get_surface_pt(step_size, t);
					FVector t_pt = FVector(surface_pt[0], surface_pt[1], surface_pt[2]);

					m_lane.nav_line.Add(t_pt);
				}

				// Road mesh
				odr::Mesh3D lane_mesh = road.get_lane_mesh(lane, step_size);

				for (int i = 0; i < lane_mesh.vertices.size(); i++)
				{
					odr::Vec3D t_vert = lane_mesh.vertices[i];
					if (flat)
					{
						m_lane.lane_vertices.Add(FVector(t_vert[0] * scale, -1 * t_vert[1] * scale, 0.f));
					}
					else
					{
						if (m_lane.type == "sidewalk")
							m_lane.lane_vertices.Add(FVector(t_vert[0] * scale, -1 * t_vert[1] * scale, t_vert[2] * scale + border_height));
						else
							m_lane.lane_vertices.Add(FVector(t_vert[0] * scale, -1 * t_vert[1] * scale, t_vert[2] * scale));
					}
				}
				for (int i = 0; i < lane_mesh.indices.size(); i++)
				{
					m_lane.lane_indices.Add(lane_mesh.indices[i]);
				}

				for (odr::RoadMark roadmark : lane.get_roadmarks(lanesec.s0, road.get_lanesection_end(lanesec)))
				{
					odr::Mesh3D marking_mesh = road.get_roadmark_mesh(lane, roadmark, step_size);

					for (int i = 0; i < marking_mesh.vertices.size(); i++)
					{
						odr::Vec3D t_vert = marking_mesh.vertices[i];
						if (flat)
						{
							m_lane.marking_vertices.Add(FVector(t_vert[0] * scale, -1 * t_vert[1] * scale, 0.f));
						}
						else
						{
							m_lane.marking_vertices.Add(FVector(t_vert[0] * scale, -1 * t_vert[1] * scale, t_vert[2] * scale + marking_height));
						}
					}
					for (int i = 0; i < marking_mesh.indices.size(); i++)
					{
						m_lane.marking_indices.Add(marking_mesh.indices[i]);
					}
				}
				m_lane.max_width = m_lane.width.Max();
				m_road.lanes.Add(m_lane);
			}
		}

		// Other objects
		for (odr::RoadObject obj : road.get_road_objects())
		{
			odr::Mesh3D object_mesh = road.get_road_object_mesh(obj, step_size);
			for (int i = 0; i < object_mesh.vertices.size(); i++)
			{
				odr::Vec3D t_vert = object_mesh.vertices[i];
				m_road.object_vertices.Add(FVector(t_vert[0] * scale, -1 * t_vert[1] * scale, t_vert[2] * scale));
			}
			for (int i = 0; i < object_mesh.indices.size(); i++)
			{
				m_road.object_indices.Add(object_mesh.indices[i]);
			}
		}
		Roads.Add(m_road);
	}
}