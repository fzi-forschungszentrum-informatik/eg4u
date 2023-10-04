// Copyright (c) 2023 FZI Forschungszentrum Informatik
// SPDX-License-Identifier: Apache-2.0

#include "OpenStreetMap_Generator.h"


static const double EarthCircumference = 40075160.0;
const double LatitudeLongitudeScale = EarthCircumference / 360.0; // meters per degree

// Sets default values
AOpenStreetMap_Generator::AOpenStreetMap_Generator()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AOpenStreetMap_Generator::BeginPlay()
{
    Super::BeginPlay();

}

// Called every frame
void AOpenStreetMap_Generator::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

}

void AOpenStreetMap_Generator::ClearOpenStreetMap()
{
    nodes.Empty();
    ways.Empty();
    relations.Empty();
}

FVector AOpenStreetMap_Generator::LatLonToXY(double lat, double lon)
{
    double x = lon * 20037508.34 / 180;
    double y = FMath::Loge(FMath::Tan((90 + lat) * PI / 360)) / (PI / 180);
    y = y * 20037508.34 / 180;

    return FVector(x, -y, 0.f);
}

FVector2D AOpenStreetMap_Generator::XYToLatLon(double x, double y)
{
    double lon = (x / 20037508.34) * 180;
    double lat = (y / 20037508.34) * 180;

    lat = 180 / PI * (2 * FMath::Atan(FMath::Exp(lat * PI / 180)) - PI / 2);
    return FVector2D(lat, lon);
}

FVector2D AOpenStreetMap_Generator::GetCentroid(TArray<FVector> poly)
{
    FVector2D centroid(0.0f, 0.0f);
    for (const FVector& point : poly) {
        centroid.X += point.X;
        centroid.Y += point.Y;
    }
    centroid.X /= poly.Max();
    centroid.Y /= poly.Max();

    return centroid;
}

TArray<FVector> AOpenStreetMap_Generator::ScalePolygon(TArray<FVector>& polygon, float scale, FVector pivot, float z)
{
    for (FVector point : polygon) {
        // Calculate the vector from the pivot to the point
        float deltaX = point.X - pivot.X;
        float deltaY = point.Y - pivot.Y;

        // Scale the vector
        deltaX *= scale;
        deltaY *= scale;

        // Update the point with the scaled coordinates
        point.X = pivot.X + deltaX;
        point.Y = pivot.Y + deltaY;
        point.Z = z;
    }
    return polygon;
}

TArray<FVector> AOpenStreetMap_Generator::OffsetPolygon(TArray<FVector> vertices, float offset, float z)
{
    TArray<FVector> offset_polygon; int OuterCCW = 1;
    if (offset < 0)
        OuterCCW = -1;
    if (OutWindsClockwise(vertices))
        OuterCCW *= -1;

    for (int32 Curr = 0; Curr < vertices.Num(); ++Curr) {
        int32 Prev = (Curr + vertices.Num() - 1) % vertices.Num();
        int32 Next = (Curr + 1) % vertices.Num();

        FVector VN = FVector(vertices[Next].X - vertices[Curr].X, vertices[Next].Y - vertices[Curr].Y, z);
        VN.Normalize();
        float NNNX = VN.Y;
        float NNNY = -VN.X;

        FVector VP = FVector(vertices[Curr].X - vertices[Prev].X, vertices[Curr].Y - vertices[Prev].Y, z);
        VP.Normalize();
        float NPNX = VP.Y * OuterCCW;
        float NPNY = -VP.X * OuterCCW;

        float BISX = (NNNX + NPNX) * OuterCCW;
        float BISY = (NNNY + NPNY) * OuterCCW;

        FVector BISN = FVector(BISX, BISY, z);
        BISN.Normalize();
        float BISLen = offset / FMath::Sqrt((1 + NNNX * NPNX + NNNY * NPNY) / 2);

        offset_polygon.Add(FVector(vertices[Curr].X + BISLen * BISN.X, vertices[Curr].Y + BISLen * BISN.Y, z));
    }
    return offset_polygon;
}


FVector AOpenStreetMap_Generator::CatmullRomSpline(float t, FVector P0, FVector P1, FVector P2, FVector P3) 
{
    float t2 = t * t;
    float t3 = t2 * t;
    float h1 = 2.0f * t3 - 3.0f * t2 + 1.0f;
    float h2 = -2.0f * t3 + 3.0f * t2;
    float h3 = t3 - 2.0f * t2 + t;
    float h4 = t3 - t2;

    FVector interpolated_pt;
    interpolated_pt.X= 0.5f * (P0.X * h1 + P1.X * h2 + P2.X * h3 + P3.X * h4);
    interpolated_pt.Y = 0.5f * (P0.Y * h1 + P1.Y * h2 + P2.Y * h3 + P3.Y * h4);

    return interpolated_pt;
}

TArray<FVector> AOpenStreetMap_Generator::GenerateArcPoints(FVector PointA, FVector PointB, FVector ArcDirection, int NumPoints) 
{
    TArray<FVector> ArcPoints;
    FVector Center = (PointA + PointB) / 2.0f;
    float Radius = FVector::Distance(PointA, Center);
    FVector CenterToArcDirection = ArcDirection - Center;
    CenterToArcDirection.Normalize();
    float StartAngle = FMath::Atan2(CenterToArcDirection.Y, CenterToArcDirection.X);
    float EndAngle = FMath::Atan2(PointB.Y - Center.Y, PointB.X - Center.X);
    if (EndAngle <= StartAngle) {
        EndAngle += 2 * PI;
    }

    for (int32 i = 0; i <= NumPoints; ++i) {
        float Angle = StartAngle + (i / static_cast<float>(NumPoints)) * (EndAngle - StartAngle);
        FVector ArcPoint;
        ArcPoint.X = Center.X + Radius * FMath::Cos(Angle);
        ArcPoint.Y = Center.Y + Radius * FMath::Sin(Angle);
        ArcPoint.Z = Center.Z;
        ArcPoints.Add(ArcPoint);
    }

    return ArcPoints;
}

UStaticMesh* AOpenStreetMap_Generator::MakeStaticMesh(UProceduralMeshComponent* ProcMesh, FString PathName, FString AssetName)
{
    UProceduralMeshComponent* ProcMeshComp = ProcMesh;
    if (ProcMeshComp != nullptr)
    {
        FString PackageName = PathName + AssetName;

        FRawMesh RawMesh;
        TArray<UMaterialInterface*> MeshMaterials;

        const int32 NumSections = ProcMeshComp->GetNumSections();
        int32 VertexBase = 0;
        for (int32 SectionIdx = 0; SectionIdx < NumSections; SectionIdx++)
        {
            FProcMeshSection* ProcSection = ProcMeshComp->GetProcMeshSection(SectionIdx);

            for (FProcMeshVertex& Vert : ProcSection->ProcVertexBuffer)
            {
                RawMesh.VertexPositions.Add(Vert.Position);
            }

            int32 NumIndices = ProcSection->ProcIndexBuffer.Num();
            for (int32 IndexIdx = 0; IndexIdx < NumIndices; IndexIdx++)
            {
                int32 Index = ProcSection->ProcIndexBuffer[IndexIdx];

                RawMesh.WedgeIndices.Add(Index + VertexBase);

                FProcMeshVertex& ProcVertex = ProcSection->ProcVertexBuffer[Index]; 

                FVector TangentX = ProcVertex.Tangent.TangentX;
                FVector TangentZ = ProcVertex.Normal;
                FVector TangentY = (TangentX ^ TangentZ).GetSafeNormal() * (ProcVertex.Tangent.bFlipTangentY ? -1.f : 1.f);

                RawMesh.WedgeTangentX.Add(TangentX);
                RawMesh.WedgeTangentY.Add(TangentY);
                RawMesh.WedgeTangentZ.Add(TangentZ);

                RawMesh.WedgeTexCoords[0].Add(ProcVertex.UV0);
                RawMesh.WedgeColors.Add(ProcVertex.Color);
            }
            int32 NumTris = NumIndices / 3;

            for (int32 TriIdx = 0; TriIdx < NumTris; TriIdx++)
            {
                RawMesh.FaceMaterialIndices.Add(SectionIdx);
                RawMesh.FaceSmoothingMasks.Add(0);
            }
            MeshMaterials.Add(ProcMeshComp->GetMaterial(SectionIdx));
            VertexBase += ProcSection->ProcVertexBuffer.Num();

        }
        if (RawMesh.VertexPositions.Num() >= 3 && RawMesh.WedgeIndices.Num() >= 3)
        {
            UPackage* Package = CreatePackage(NULL, *PackageName);
            check(Package);
            UStaticMesh* StaticMesh = NewObject<UStaticMesh>(Package, FName(*AssetName), RF_Public | RF_Standalone);
            StaticMesh->InitResources();

            StaticMesh->LightingGuid = FGuid::NewGuid();

            FStaticMeshSourceModel* SrcModel = new (StaticMesh->GetSourceModels()) FStaticMeshSourceModel();
            SrcModel->BuildSettings.bRecomputeNormals = false;
            SrcModel->BuildSettings.bRecomputeTangents = false;
            SrcModel->BuildSettings.bRemoveDegenerates = false;
            SrcModel->BuildSettings.bUseHighPrecisionTangentBasis = false;
            SrcModel->BuildSettings.bUseFullPrecisionUVs = false;
            SrcModel->BuildSettings.bGenerateLightmapUVs = true;
            SrcModel->BuildSettings.SrcLightmapIndex = 0;
            SrcModel->BuildSettings.DstLightmapIndex = 1;
            SrcModel->RawMeshBulkData->SaveRawMesh(RawMesh);

            for (UMaterialInterface* Material : MeshMaterials)
            {
                StaticMesh->StaticMaterials.Add(FStaticMaterial(Material));
            }

            StaticMesh->ImportVersion = EImportStaticMeshVersion::LastVersion;
            StaticMesh->Build(false);
            StaticMesh->PostEditChange();
            StaticMesh->MarkPackageDirty();

            FAssetRegistryModule::AssetCreated(StaticMesh);

            return StaticMesh;
        }
        else
        {
            return nullptr;
        }
    }
    else
    {
        return nullptr;
    }
}

void AOpenStreetMap_Generator::ImportOpenStreetMap(float sample_rate, bool modify_eps, FVector center, float scale, bool flat, FString filename = "C:\\OSM\\Durlacher_Tor.osm")
{
	pugi::xml_parse_result result = xml_doc.load_file(TCHAR_TO_UTF8(*filename));
    
    if (!result)
    {
        UE_LOG(LogTemp, Log, TEXT("Error - OpenStreetMap document or XML-structures corrupted!"));
        printf("%s\n", result.description());
    }
    int i = 0; int j = 0; int k = 0;
    pugi::xml_node osm_root = xml_doc.child("osm");

    auto ConvertLatitudeToMeters = [](const double Latitude) -> double
    {
        return -Latitude * LatitudeLongitudeScale;
    };

    auto ConvertLongitudeToMeters = [](const double Longitude, const double Latitude) -> double
    {
        return Longitude * LatitudeLongitudeScale * FMath::Cos(FMath::DegreesToRadians(Latitude));
    };

    auto ConvertLatLongToMetersRelative = [ConvertLatitudeToMeters, ConvertLongitudeToMeters](
        const double Latitude,
        const double Longitude,
        const double RelativeToLatitude,
        const double RelativeToLongitude) -> FVector
    {
        return FVector(
            (float)(ConvertLongitudeToMeters(Longitude, Latitude) - ConvertLongitudeToMeters(RelativeToLongitude, Latitude)),
            (float)(ConvertLatitudeToMeters(Latitude) - ConvertLatitudeToMeters(RelativeToLatitude)),
            0.f);
    };

    double avg_lat = 0.f;
    double avg_lon = 0.f; 

    if (auto bounds_node = osm_root.child("bounds"))
    { 
        minlat = bounds_node.attribute("minlat").as_double(0.0);
        minlon = bounds_node.attribute("minlon").as_double(0.0);
        maxlat = bounds_node.attribute("maxlat").as_double(0.0);
        maxlon = bounds_node.attribute("maxlon").as_double(0.0);
        avg_lat = (maxlat + minlat) / 2;
        avg_lon = (maxlon + minlon) / 2;
    }
    for (pugi::xml_node osm_node : osm_root.children("node"))
    {   
        FOpenStreetMap_Generator_Node nd;
        std::string id = osm_node.attribute("id").as_string("");
        node_map.Add(id.c_str(), i);
        nd.id = i;
        double lat = osm_node.attribute("lat").as_double(0.0);
        double lon = osm_node.attribute("lon").as_double(0.0);

        nd.coord = ConvertLatLongToMetersRelative(avg_lat, avg_lon, lat, lon) * 100.f;

        for (pugi::xml_node node_tag : osm_node.children("tag"))
        {
            std::string key = node_tag.attribute("k").as_string("");
            std::string val = node_tag.attribute("v").as_string("");
            nd.tags.Add(key.c_str(), val.c_str());
        }
        nodes.Add(nd); i++;
    }
    for (pugi::xml_node osm_way : osm_root.children("way"))
    {
        FOpenStreetMap_Generator_Way w;
        std::string id = osm_way.attribute("id").as_string("");
        way_map.Add(id.c_str(), j);
        w.id = j;

        for (pugi::xml_node nd_ref : osm_way.children("nd"))
        {
            std::string ref = nd_ref.attribute("ref").as_string("");
            int node_index = node_map.FindRef(ref.c_str());
            w.nd_ref.Add(node_index);
            w.ref_line.Add(nodes[node_index].coord);
        }
        for (pugi::xml_node way_tag : osm_way.children("tag"))
        {
            std::string key = way_tag.attribute("k").as_string("");
            std::string val = way_tag.attribute("v").as_string("");

            w.tags.Add(key.c_str(), val.c_str());
        }
        ways.Add(w); j++;
    }
    for (pugi::xml_node osm_relation : osm_root.children("relation"))
    {
        FOpenStreetMap_Generator_Relation rel;
        std::string id = osm_relation.attribute("id").as_string("");
        rel_map.Add(id.c_str(), k);
        rel.id = k;

        for (pugi::xml_node osm_member : osm_relation.children("member"))
        {
            FOpenStreetMap_Generator_Member mem;
            std::string type = osm_member.attribute("type").as_string("");
            std::string ref = osm_relation.attribute("ref").as_string("");
            std::string role = osm_member.attribute("role").as_string("");
            mem.type = type.c_str();
            mem.ref = node_map.FindRef(ref.c_str());
            mem.role = role.c_str();
            rel.members.Add(mem);
        }
        for (pugi::xml_node rel_tag : osm_relation.children ("tag"))
        {
            std::string key = rel_tag.attribute("k").as_string("");
            std::string val = rel_tag.attribute("v").as_string("");
            rel.tags.Add(key.c_str(), val.c_str());
        }
        relations.Add(rel); k++;
    }
}

TArray<int> AOpenStreetMap_Generator::FindSharedNodes() 
{
    TMap<int, int> node_counts; // id, count
    TArray<int> shared_road_nodes; 

    for (FOpenStreetMap_Generator_Way road : ways) 
    {
        node_counts.Add(road.nd_ref[0], 0);
        node_counts.Add(road.nd_ref.Last(), 0);
    }

    for (FOpenStreetMap_Generator_Way road : ways) 
    {
        node_counts[road.nd_ref[0] ]++;
        node_counts[road.nd_ref.Last()]++;
    }

    for (const auto& node_count_pair : node_counts) 
    {
        if (node_count_pair.Value > 2)
        {
            shared_road_nodes.Add(node_count_pair.Key);
        }
    }

    return shared_road_nodes;
}

void AOpenStreetMap_Generator::InsertNodesBetweenSharedAndNearest() 
{
    shared_nodes = FindSharedNodes();

    for (int shared_node : shared_nodes) 
    {
        for (FOpenStreetMap_Generator_Way& road : ways) 
        {
            if (road.nd_ref[0] == shared_node || road.nd_ref.Last() == shared_node) 
            {
                FVector closest_node = (FVector::Distance(road.ref_line[0], nodes[shared_node].coord) < FVector::Distance(road.ref_line.Last(), nodes[shared_node].coord))
                    ? road.ref_line[0]
                    : road.ref_line.Last();

                FVector new_node_coord = (nodes[shared_node].coord + closest_node) / 2.0f; 
                FOpenStreetMap_Generator_Node new_node;
                new_node.id = nodes.Num() - 1;
                new_node.coord = new_node_coord;

                int last_node = road.nd_ref.Last();
                road.nd_ref.Add(new_node.id);
                road.nd_ref.Add(last_node);
                road.ref_line.Add(new_node_coord);
            }
        }
    }
}

void AOpenStreetMap_Generator::ConnectSharedNodes() 
{
    TArray<bool> road_connected;
    TArray<FOpenStreetMap_Generator_Way> updated_roads;
    shared_nodes = FindSharedNodes();

    for (int i = 0; i < ways.Num(); ++i)
    {
        road_connected.Add(false);
    }

    for (int shared_node : shared_nodes) 
    {
        TArray<FOpenStreetMap_Generator_Way> connected_roads;
        for (int i = 0; i < ways.Num(); ++i) 
        {
            FOpenStreetMap_Generator_Way& road = ways[i];
            if (road.tags.Contains("highway") && (road.nd_ref[0] == shared_node || road.nd_ref.Last() == shared_node) && !road_connected[i])
            {
                connected_roads.Add(road);
                road_connected[i] = true;
            }

        }

        if (connected_roads.Num() == 4)
        {
            TArray<FVector> closest_nodes;
            FOpenStreetMap_Generator_Way road01;
            FOpenStreetMap_Generator_Way road02;
            FOpenStreetMap_Generator_Way road03;
            FOpenStreetMap_Generator_Way road04;
            FOpenStreetMap_Generator_Way road05;
            FOpenStreetMap_Generator_Way road06;

            for (FOpenStreetMap_Generator_Way connected_road : connected_roads)
            {
                FVector closest_node;
                if (FVector::Distance(connected_road.ref_line[0], nodes[shared_node].coord) < FVector::Distance(connected_road.ref_line.Last(), nodes[shared_node].coord))
                {
                    closest_node = connected_road.ref_line[0];
                    connected_road.ref_line.RemoveAt(0, 1, true);
                }
                else {
                    closest_node = connected_road.ref_line.Last();
                    connected_road.ref_line.RemoveAt(connected_road.ref_line.Num() - 1, 1, true);
                }

                closest_nodes.Add(closest_node);
            }

            FVector coord01 = (nodes[shared_node].coord + closest_nodes[0]) / 2.0f;
            FVector coord02 = (nodes[shared_node].coord + closest_nodes[1]) / 2.0f;
            FVector coord03 = (nodes[shared_node].coord + closest_nodes[2]) / 2.0f;
            FVector coord04 = (nodes[shared_node].coord + closest_nodes[3]) / 2.0f;

            road01.ref_line.Add(coord01);
            road01.ref_line.Add(coord02);
            road02.ref_line.Add(coord01);
            road02.ref_line.Add(coord03);
            road03.ref_line.Add(coord01);
            road03.ref_line.Add(coord04);
            road04.ref_line.Add(coord02);
            road04.ref_line.Add(coord03);
            road05.ref_line.Add(coord02);
            road05.ref_line.Add(coord04);
            road06.ref_line.Add(coord03);
            road06.ref_line.Add(coord04);

            connected_ways.Add(road01);
            connected_ways.Add(road02);
            connected_ways.Add(road03);
            connected_ways.Add(road04);
            connected_ways.Add(road05);
            connected_ways.Add(road06);
        }
        else if (connected_roads.Num() == 3)
        {
            TArray<FVector> closest_nodes;
            FOpenStreetMap_Generator_Way road01;
            FOpenStreetMap_Generator_Way road02;
            FOpenStreetMap_Generator_Way road03;

            for (FOpenStreetMap_Generator_Way connected_road : connected_roads)
            {
                FVector closest_node;
                if (FVector::Distance(connected_road.ref_line[0], nodes[shared_node].coord) < FVector::Distance(connected_road.ref_line.Last(), nodes[shared_node].coord))
                {
                    closest_node = connected_road.ref_line[0];
                    connected_road.ref_line.RemoveAt(0, 1, true);
                }
                else {
                    closest_node = connected_road.ref_line.Last();
                    connected_road.ref_line.RemoveAt(connected_road.ref_line.Num() - 1, 1, true);
                }
                closest_nodes.Add(closest_node);
            }
            FVector coord01 = (nodes[shared_node].coord + closest_nodes[0]) / 2.0f;
            FVector coord02 = (nodes[shared_node].coord + closest_nodes[1]) / 2.0f;
            FVector coord03 = (nodes[shared_node].coord + closest_nodes[2]) / 2.0f;

            road01.ref_line.Add(coord01);
            road01.ref_line.Add(coord02);
            road02.ref_line.Add(coord01);
            road02.ref_line.Add(coord03);
            road03.ref_line.Add(coord02);
            road03.ref_line.Add(coord03);

            connected_ways.Add(road01);
            connected_ways.Add(road02);
            connected_ways.Add(road03);
        }
    }

    /*
    TArray<bool> road_visited;
    for (int i = 0; i < ways.Num(); ++i)
    {
        road_visited.Add(false);
    }

    for (int shared_node : shared_nodes)
    {
        TArray<FOpenStreetMap_Generator_Way> connected_roads;

        for (int i = 0; i < ways.Num(); ++i)
        {
            FOpenStreetMap_Generator_Way& road = ways[i];
            if ((road.nd_ref[0] == shared_node || road.nd_ref.Last() == shared_node) && !road_visited[i])
            {
                if (FVector::Distance(road.ref_line[0], nodes[shared_node].coord) <
                    FVector::Distance(road.ref_line.Last(), nodes[shared_node].coord))
                {
                    road.nd_ref.RemoveAt(0, 1, true);
                    road.ref_line.RemoveAt(0, 1, true);
                }
                else
                {
                    road.nd_ref.RemoveAt(road.nd_ref.Num() - 1, 1, true);
                    road.ref_line.RemoveAt(road.nd_ref.Num() - 1, 1, true);
                }
                road_visited[i] = true;
            }
        }
    }
    */
}

void AOpenStreetMap_Generator::RefineRoadSegments()
{
    for (FOpenStreetMap_Generator_Way way : ways)
    {
        int nd_0_first = way.nd_ref[0];
        int nd_0_last = way.nd_ref.Last();

        for (FOpenStreetMap_Generator_Way connecting : ways)
        {
            if (way.id != connecting.id)
            {
                int nd_1_first = connecting.nd_ref[0];
                int nd_1_last = connecting.nd_ref.Last();
                
                if (nd_0_first == nd_1_first)
                {
                    if (!way.connections.Contains(nd_0_first) && !connecting.connections.Contains(nd_0_first))
                    {
                        way.connections.Add(nd_0_first);
                        connecting.connections.Add(nd_0_first);
                        nodes[nd_0_first].connections.Add(way.id);
                        nodes[nd_0_first].connections.Add(connecting.id);
                        nodes[nd_0_first].connection_start.Add(true);
                        nodes[nd_0_first].connection_start.Add(true);
                    }
                }
                else if (nd_0_first == nd_1_last)
                {
                    if (!way.connections.Contains(nd_0_first) && !connecting.connections.Contains(nd_0_first))
                    {
                        way.connections.Add(nd_0_first);
                        connecting.connections.Add(nd_0_first);
                        nodes[nd_0_first].connections.Add(way.id);
                        nodes[nd_0_first].connections.Add(connecting.id);
                        nodes[nd_0_first].connection_start.Add(true);
                        nodes[nd_0_first].connection_start.Add(false);
                    }
                }
                else if (nd_0_last == nd_1_first)
                {
                    if (!way.connections.Contains(nd_0_last) && !connecting.connections.Contains(nd_0_last))
                    {
                        way.connections.Add(nd_0_last);
                        connecting.connections.Add(nd_0_last);
                        nodes[nd_0_first].connections.Add(way.id);
                        nodes[nd_0_first].connections.Add(connecting.id);
                        nodes[nd_0_first].connection_start.Add(false);
                        nodes[nd_0_first].connection_start.Add(true);
                    }
                }
                else if (nd_0_last == nd_1_last)
                {
                    if (!way.connections.Contains(nd_0_last) && !connecting.connections.Contains(nd_0_last))
                    {
                        way.connections.Add(nd_0_last);
                        connecting.connections.Add(nd_0_last);
                        nodes[nd_0_first].connections.Add(way.id);
                        nodes[nd_0_first].connections.Add(connecting.id);
                        nodes[nd_0_first].connection_start.Add(false);
                        nodes[nd_0_first].connection_start.Add(false);
                    }
                }
            }
        }
    }

    for (FOpenStreetMap_Generator_Node nd : nodes)
    {
        if (nd.connections.Num() > 3)
        {
            for (int i = 0; i < nd.connections.Num(); i++)
            {
                int way_id_A = nd.connections[i];
                int way_id_B = nd.connections[(i + 1) % nd.connections.Num()];

                FOpenStreetMap_Generator_Way new_way;
                FVector connecting_node_A;
                FVector connecting_node_B;

                connecting_node_A = nd.connection_start[i]                              ? ways[way_id_A].ref_line[1] : ways[way_id_A].ref_line.Last(1);
                connecting_node_B = nd.connection_start[(i + 1) % nd.connections.Num()] ? ways[way_id_B].ref_line[1] : ways[way_id_B].ref_line.Last(1);
                
                TArray<FVector> connecting_arc = GenerateArcPoints(connecting_node_A, connecting_node_B, nd.coord, 4);
                new_way.ref_line.Add(connecting_node_A);
                new_way.ref_line.Add(connecting_node_B);
                new_way.id = ways.Num() + 1;
                new_way.tags.Add("highway", "connection");

                ways.Add(new_way);
            }
        }
    }
    /*
    // Remove center nodes from intersections
    for (FOpenStreetMap_Generator_Node nd : nodes)
    {
        if (nd.connections.Num() > 2)
        {
            for (int nd_id : nd.connections)
            {
                if (nd.connection_start[nd_id])
                {
                    ways[nd_id].ref_line.RemoveAt(nd_id, true);
                }
                else
                {
                    ways[nd_id].ref_line.RemoveAt(ways[nd_id].ref_line.Num() - 1, true);
                }
            }
            nd.connections.Empty();
        }
    }
    */
}



FOpenStreetMap_Generator_MeshInfo AOpenStreetMap_Generator::GenerateOSMRoad(TArray<FVector> ref_line, TMap<FString, FString> osm_tags, int default_lanes, float lane_width, float sidewalkWidth, float sidewalkHeight, int resolution)
{
    TArray<FVector> vertices;
    TArray<int> triangles;
    TArray<FVector2D> uv_coords;

    float road_width = default_lanes * lane_width;
    float left_width = 0.0f;
    float right_width = 0.0f;

    int num_lanes = default_lanes;

    if (osm_tags.Contains("width")) 
    {
        FString width = *osm_tags.Find("width");
        road_width = atof(TCHAR_TO_UTF8(*width));
    }
    if (osm_tags.Contains("lanes")) 
    {
        FString lanes = *osm_tags.Find("lanes");
        num_lanes = atoi(TCHAR_TO_UTF8(*lanes));
        road_width = lane_width * num_lanes;
        default_lanes = num_lanes;
    }

    FString placement;
    if (osm_tags.Contains("placement")) 
    {
        placement = *osm_tags.Find("placement");
    }
    else if (osm_tags.Contains("placement:forward")) 
    {
        placement = *osm_tags.Find("placement:forward");
    }
    else if (osm_tags.Contains("placement:backward")) 
    {
        placement = *osm_tags.Find("placement:backward");
    }

    if (placement == "left_of:") 
    {
        if (osm_tags.Contains("left:lanes")) 
        {
            TArray<FString> lane_widths;
            FString left_lanes = *osm_tags.Find("left:lanes");
            int elements = left_lanes.ParseIntoArray(lane_widths, TEXT("|"), true);

            if (default_lanes < elements) 
            {
                FString width = lane_widths[default_lanes];
                left_width = atof(TCHAR_TO_UTF8(*width));
            }
        }
        else if (osm_tags.Contains("left")) 
        {
            FString width = *osm_tags.Find("left");
            left_width = atof(TCHAR_TO_UTF8(*width));
        }
        right_width = road_width - left_width;
    }
    else if (placement == "right_of:") 
    {
        if (osm_tags.Contains("right:lanes")) 
        {
            TArray<FString> lane_widths;
            FString right_lanes = *osm_tags.Find("right:lanes");
            right_lanes.ParseIntoArray(lane_widths, TEXT("|"), true);

            if (default_lanes < lane_widths.Num()) 
            {
                FString width = lane_widths[default_lanes];
                right_width = atof(TCHAR_TO_UTF8(*width));
            }
        }
        else if (osm_tags.Contains("right")) 
        {
            FString width = *osm_tags.Find("right");
            right_width = atof(TCHAR_TO_UTF8(*width));
        }
        left_width = road_width - right_width;
    }
    else if (placement == "middle_of:") 
    {
        if (osm_tags.Contains("middle:lanes")) 
        {
            TArray<FString> lane_widths;
            FString right_lanes = *osm_tags.Find("middle:lanes");
            right_lanes.ParseIntoArray(lane_widths, TEXT("|"), true);

            if (default_lanes < lane_widths.Num()) 
            {
                FString width = lane_widths[default_lanes];
                left_width = atof(TCHAR_TO_UTF8(*width)) / 2;
                right_width = road_width - left_width;
            }
        }
    }
    else 
    {
        left_width = road_width / 2;
        right_width = road_width / 2;
    }

    int numPoints = static_cast<int>(ref_line.Num());

    for (int i = 0; i < numPoints; i++) 
    {
        FVector2D uv;

        FVector p1 = ref_line[i];
        FVector p2 = ref_line[(i + 1) % numPoints];
        FVector dir = p2 - p1;
        dir.Normalize();
        FVector normal(dir.Y, -dir.X, 0.f);

        FVector pOuter1 = p1 + normal * (left_width);
        FVector pOuter2 = p2 + normal * (right_width);
        FVector pInner1 = p1 + normal * (left_width - sidewalkWidth);
        FVector pInner2 = p2 + normal * (right_width - sidewalkWidth);

        for (int j = 0; j <= resolution; j++) 
        {
            float t = static_cast<float>(j) / resolution;

            FVector pOuter = FMath::Lerp(pOuter1, pOuter2, t);
            FVector pInner = FMath::Lerp(pInner1, pInner2, t);

            FVector vOuter1(pOuter.X, pOuter.Y, 0.f);
            FVector vInner1(pInner.X, pInner.Y, 0.f);

            vertices.Add(vOuter1);
            vertices.Add(vInner1);
            uv_coords.Add(FVector2D(j / resolution, 1.f));
            uv_coords.Add(FVector2D(j / resolution, 0.f));
        }
    }

    int numVerticesPerPoint = (resolution + 1) * 2;
    for (int i = 0; i < numPoints; i++) 
    {
        int index = i * numVerticesPerPoint;

        for (int j = 0; j < resolution; j++) 
        {
            triangles.Add(index + j * 2);
            triangles.Add(index + j * 2 + 1);
            triangles.Add(index + j * 2 + 2);
            triangles.Add(index + j * 2 + 2);
            triangles.Add(index + j * 2 + 1);
            triangles.Add(index + j * 2 + 3);
        }
    }

    FOpenStreetMap_Generator_MeshInfo mesh_info;
    mesh_info.vertices = vertices;
    mesh_info.triangles = triangles;
    mesh_info.uv_coords = uv_coords;
    return mesh_info;
}

TArray<FVector2D> AOpenStreetMap_Generator::GenerateRoadUVs(FVector road_start, FVector road_end, FVector width, TArray<FVector> vertices) 
{
    TArray<FVector2D> uv_coords;
    float length = FMath::Sqrt(FMath::Pow(road_end.X - road_start.X, 2) + FMath::Pow(road_end.Y - road_start.Y, 2));

    for (const FVector vertex : vertices) 
    {
        float u = (vertex.X - road_start.X) / length;
        float v = fabs((vertex.Y - road_start.Y) * (road_end.X - road_start.X) - (vertex.X - road_start.X) * (road_end.Y - road_start.Y)) / length;

        uv_coords.Emplace(u, v);
    }
    
    return uv_coords;
}

TArray<FOpenStreetMap_Generator_MeshInfo> AOpenStreetMap_Generator::FindEnclosedAreaPolygons(FOpenStreetMap_Generator_Way startRoad, TArray<FOpenStreetMap_Generator_Way> roads) {
    
    TArray<FOpenStreetMap_Generator_Way> polygons;
    TArray<FOpenStreetMap_Generator_MeshInfo> polygon_meshes;

    auto SharesCommonPoint = [](FOpenStreetMap_Generator_Way road1, FOpenStreetMap_Generator_Way road2) -> bool
    {
        for (int point_id_1 : road1.nd_ref) {
            for (int point_id_2 : road2.nd_ref) {
                if (point_id_1 == point_id_2) {
                    return true;
                }
            }
        }
        return false;
    };
    TSet<int> visitedRoads;

    for (FOpenStreetMap_Generator_Way road : roads) {
        FOpenStreetMap_Generator_MeshInfo poly_mesh;
        if (visitedRoads.Contains(road.id)) {
            continue;
        }
        TArray<int> polygon = road.nd_ref;
        visitedRoads.Add(road.id);

        TArray<int> queue;
        queue.Add(road.id);

        while (queue.Num() > 0) {
            int currentRoadId = queue.Pop();

            for (const FOpenStreetMap_Generator_Way& connectedRoad : roads) {
                if (!visitedRoads.Contains(connectedRoad.id) &&
                    SharesCommonPoint(roads[currentRoadId], connectedRoad)) {
                    UE_LOG(LogTemp, Log, TEXT("Roads intersecting: %d x %d"), roads[currentRoadId].id, connectedRoad.id);
                    queue.Add(connectedRoad.id);
                    visitedRoads.Add(connectedRoad.id);
                    for (int nd_id : connectedRoad.nd_ref)
                    {
                        polygon.Add(nd_id);
                    }
                    for (FVector pt : connectedRoad.ref_line)
                    {
                        poly_mesh.vertices.Add(pt);
                    }
                }
            }
        }
        FOpenStreetMap_Generator_Way unique_polygon;
        TArray<int> unique_polygon_points;
        for (int pointId : polygon) {
            if (!unique_polygon_points.Contains(pointId)) {
                unique_polygon_points.Add(pointId);
            }
        }
        unique_polygon.nd_ref = unique_polygon_points;
        polygons.Add(unique_polygon);
        polygon_meshes.Add(poly_mesh);
    }
    TArray<FVector2D> polygon2D;
    for (FOpenStreetMap_Generator_MeshInfo m : polygon_meshes)
    {
        for (FVector v : m.vertices)
            polygon2D.Add(FVector2D(v.X, v.Y));
    }
    TArray<int> t_indices;
    TArray<int> triangles;
    bool winding;
    TriangulatePolygonInPlace(polygon2D, t_indices, triangles, winding);
    return polygon_meshes;
}

FOpenStreetMap_Generator_MeshInfo AOpenStreetMap_Generator::GenerateSidewalks(TArray<FVector> ref_line)
{
    FOpenStreetMap_Generator_MeshInfo mesh_info;
    //mesh_info.vertices = result;
    //mesh_info.triangles = triangles;
    return mesh_info;
}

FOpenStreetMap_Generator_MeshInfo AOpenStreetMap_Generator::GenerateSurfaces(TArray<FVector> area)
{
    TArray<FVector2D> polygon;
    for (FVector v : area)
    {
        polygon.Add(FVector2D(v));
    }

    TArray<int32> t_indices;
    TArray<int32> triangles;
    bool winding;
    TriangulatePolygonInPlace(polygon, t_indices, triangles, winding);

    TArray<FVector> result;
    for (FVector2D v : polygon)
    {
        result.Add(FVector(v.X, v.Y, 0.f));
    }

    FOpenStreetMap_Generator_MeshInfo mesh_info;
    mesh_info.vertices = result;
    mesh_info.triangles = triangles;
    return mesh_info;
}

FOpenStreetMap_Generator_MeshInfo AOpenStreetMap_Generator::GenerateRoof(TArray<FVector> footprint, TMap<FString, FString> osm_tags, EOpenStreetMap_RoofType roof_type, float roof_height, float roof_size)
{
    auto ReverseArray = [](TArray<FVector>& Array) -> void
    {
        int Start = 0;
        int End = Array.Num() - 1;
        while (Start < End) 
        {
            FVector Temp = Array[Start];
            Array[Start] = Array[End];
            Array[End] = Temp;
            Start++;
            End--;
        }
    };

    if (osm_tags.Contains("roof:shape"))
    {
        FString tag = *osm_tags.Find("roof:shape");
        if (tag == "flat")
        {
            roof_type = EOpenStreetMap_RoofType::Flat;
        }
        else if (tag == "gabled")
        {
            roof_type = EOpenStreetMap_RoofType::Gabled;
        }
        else if (tag == "hipped")
        {
            roof_type = EOpenStreetMap_RoofType::Hipped;
        }
        else if (tag == "pyramidal")
        {
            roof_type = EOpenStreetMap_RoofType::Pyramidal;
        }
        else if (tag == "sawtooth")
        {
            roof_type = EOpenStreetMap_RoofType::Sawtooth;
        }
    }

    TArray<FVector> vertices;
    TArray<int> triangles;
    TArray<FVector2D> uv_coords;
    FVector centroid(0.0f, 0.0f, roof_size);

    int levels = 4;
    int roof_levels = 1;

    if (osm_tags.Contains("building:levels"))
    {
        FString tag = *osm_tags.Find("building:levels");
        levels = atof(TCHAR_TO_UTF8(*tag));
        roof_height = levels * 300.0f;
    }
    if (osm_tags.Contains("height"))
    {
        FString tag = *osm_tags.Find("height");
        roof_height = atof(TCHAR_TO_UTF8(*tag));
        roof_height *= 100;
    }
    if (osm_tags.Contains("roof:levels"))
    {
        FString tag = *osm_tags.Find("roof:levels");
        roof_levels = atof(TCHAR_TO_UTF8(*tag));
        roof_size = roof_levels * 600.f;
    }

    TArray<FVector2D> polygon;
    for (FVector v : footprint)
    {
        polygon.Add(FVector2D(v));
    }
    bool winding = Area(polygon) < 0.0f;

    switch (roof_type)
    {
    /*
    case EOpenStreetMap_RoofType::Hipped:
    {
        for (const FVector& point : footprint) 
        {
            vertices.Add(FVector(point.X, point.Y, roof_height));
        }

        TArray<FVector> offset_vertices = OffsetPolygon(footprint, 250, roof_height + roof_size);

        int base_indices = footprint.Num();
        int vert_indices = base_indices * 2;

        for (int i = 0; i < base_indices; ++i) 
        {
            int v0 = i % base_indices;
            int v1 = (i + 1) % base_indices;
            int v2 = (base_indices + i * 2) % vert_indices;
            int v3 = (base_indices + i * 2 + 1) % vert_indices;

            triangles.Add(v0);
            triangles.Add(v1);
            triangles.Add(v2);
            triangles.Add(v1);
            triangles.Add(v3);
            triangles.Add(v2);
        }
        
        TArray<FVector2D> polygon_top;
        for (FVector v : offset_vertices)
        {
            polygon_top.Add(FVector2D(v));
        }

        TArray<int> t_indices;
        TriangulatePolygonInPlace(polygon_top, t_indices, triangles, winding);
        for (FVector2D v : polygon_top)
        {
            vertices.Add(FVector(v.X, v.Y, roof_height + roof_size));
        }

        triangles.Append(t_indices);
    }
    case EOpenStreetMap_RoofType::Gabled:
    {
        int base_indices = footprint.Num();

        int first01 = 0;
        int first02 = 0;
        int second01 = 0;
        int second02 = 0;

        for (int i = 0; i < base_indices; ++i)
        {
            int v0 = i % base_indices;
            int v1 = (i + 1) % base_indices;
            if (FVector::Distance(footprint[v0], footprint[v1]) > FVector::Distance(footprint[first01], footprint[first02]))
            {
                second01 = first01;
                second02 = first02;
                first01 = v0;
                first02 = v1;
            }
            else if (FVector::Distance(footprint[v0], footprint[v1]) > FVector::Distance(footprint[second01], footprint[second02]))
            {
                second01 = v0;
                second02 = v1;
            }
        }
        FVector edge_vert01 = FVector(
            (footprint[first01].X + footprint[first02].X) / 2,
            (footprint[first01].Y + footprint[first02].Y) / 2,
             roof_height+roof_size);
        FVector edge_vert02 = FVector(
            (footprint[second01].X + footprint[second02].X) / 2,
            (footprint[second01].Y + footprint[second02].Y) / 2,
            roof_height + roof_size);

        TArray<int> t_indices;

        TArray<FVector2D> roof_verts;
        for (FVector v : footprint)
        {
            roof_verts.Add(FVector2D(v));
        }
        roof_verts.Add(FVector2D(edge_vert01));
        roof_verts.Add(FVector2D(edge_vert02));

        TriangulatePolygonInPlace(roof_verts, t_indices, triangles, winding);

        for (FVector2D v : roof_verts)
        {
            vertices.Add(FVector(v.X, v.Y, roof_height));
        }
        vertices[base_indices] = FVector(vertices[base_indices].X, vertices[base_indices].Y, roof_height + roof_size);
        vertices[base_indices + 1] = FVector(vertices[base_indices + 1].X, vertices[base_indices + 1].Y, roof_height + roof_size);
        
        triangles.Append(t_indices);

        triangles.Add(first01);
        triangles.Add(base_indices + 1);
        triangles.Add(first02);
        triangles.Add(second01);
        triangles.Add(base_indices);
        triangles.Add(second02);
        break;
    }
    */
    case EOpenStreetMap_RoofType::Pyramidal:
    {
        for (const FVector& point : footprint)
        {
            centroid.X += point.X;
            centroid.Y += point.Y;
        }
        centroid.X /= footprint.Num();
        centroid.Y /= footprint.Num();

        vertices.Add(FVector(centroid.X, centroid.Y, roof_height + roof_size));

        for (int i = 0; i < footprint.Num(); ++i)
        {
            vertices.Add(FVector(footprint[i].X, footprint[i].Y, roof_height));
        }
        for (int i = 1; i < footprint.Num(); ++i)
        {
            if (winding)
            {
                triangles.Add(0);
                triangles.Add(i);
                triangles.Add(i + 1);
            }
            else
            {
                triangles.Add(i);
                triangles.Add(0);
                triangles.Add(i + 1);
            }
        }
        break;
    }
    case EOpenStreetMap_RoofType::Gabled:
    {
        for (const FVector& point : footprint)
        {
            vertices.Add(FVector(point.X, point.Y, roof_height));
        }

        TArray<FVector> upper_roof = OffsetPolygon(footprint, 250, roof_height + roof_size);

        for (const FVector& point : upper_roof)
        {
            vertices.Add(FVector(point.X, point.Y, roof_height + roof_size));
        }


        TArray<int> t_indices;
        TriangulatePolygonInPlace(polygon, t_indices, triangles, winding);

        TArray<FVector2D> polygon2;
        TArray<int> t_indices2;
        TArray<int> triangles2;
        for (FVector v : upper_roof)
        {
            polygon2.Add(FVector2D(v));
        }

        winding = Area(polygon2) < 0.0f;
        TriangulatePolygonInPlace(polygon2, t_indices2, triangles2, winding); 

        t_indices.Append(t_indices2);
        triangles.Append(triangles2);

        ReverseArray(vertices);

        for (int i = 0; i < footprint.Num(); ++i)
        {
            int v0 = i % footprint.Num();
            int v1 = (i + 1) % footprint.Num();
            int v2 = footprint.Num() + i % (footprint.Num() * 2);
            int v3 = footprint.Num() + (i + 1) % (footprint.Num() * 2);
            t_indices.Add(v0);
            t_indices.Add(v1);
            t_indices.Add(v2);
            t_indices.Add(v3);
            t_indices.Add(v2);
            t_indices.Add(v1);
        }
    }
    /*
    case EOpenStreetMap_RoofType::Sawtooth:
    {
        for (int i = 0; i < footprint.Num(); ++i)
        {
            vertices.Add(FVector(footprint[i].X, footprint[i].Y, roof_size));
            vertices.Add(FVector(footprint[i].X, footprint[i].Y, roof_height));
        }
        for (size_t i = 0; i < footprint.Num(); ++i)
        {
            int v0 = i;
            int v1 = (i + 1) % footprint.Num();
            int v2 = footprint.Num() + i * 2;
            int v3 = footprint.Num() + i * 2 + 1;

            triangles.Add(v0);
            triangles.Add(v1);
            triangles.Add(v2);
            triangles.Add(v1);
            triangles.Add(v3);
            triangles.Add(v2);
        }
        break;
    }
    */
    case EOpenStreetMap_RoofType::Flat:
    default:
        TArray<int> t_indices;
        TriangulatePolygonInPlace(polygon, t_indices, triangles, winding);
        for (FVector2D v : polygon)
        {
            vertices.Add(FVector(v.X, v.Y, roof_height));
        }
        ReverseArray(vertices);
        break;
    }

    FOpenStreetMap_Generator_MeshInfo mesh_info;
    mesh_info.vertices = vertices;
    mesh_info.triangles = triangles;
    return mesh_info;
}

FOpenStreetMap_Generator_MeshInfo AOpenStreetMap_Generator::GenerateBuilding(TArray<FVector> footprint, TMap<FString, FString> osm_tags, int default_levels, EOpenStreetMap_RoofType roof_type, float roof_size)
{
    TArray<FVector> vertices;
    TArray<int> triangles;
    TArray<FVector2D> uv_coords;
    float height = default_levels * 300.0f;
    int levels = default_levels;

    if (osm_tags.Contains("building:levels"))
    {
        FString tag = *osm_tags.Find("building:levels");
        levels = atof(TCHAR_TO_UTF8(*tag));
        height = levels * 300.0f;
    }
    else if (osm_tags.Contains("height"))
    {
        FString tag = *osm_tags.Find("height");
        height = atof(TCHAR_TO_UTF8(*tag));
        height *= 100;
    }

    TArray<FVector2D> polygon;
    for (FVector v : footprint)
    {
        polygon.Add(FVector2D(v));
    }

    bool winding = Area(polygon) < 0.0f;

    for (int i = 0; i < footprint.Num(); ++i) {
        FVector corner_1 = footprint[i];
        FVector corner_2 = footprint[(i + 1) % footprint.Num()];
        FVector wall_top_1 = corner_1;
        FVector wall_top_2 = corner_2;
        wall_top_1.Z = height;
        wall_top_2.Z = height;

        vertices.Add(corner_1);
        vertices.Add(wall_top_1);
        vertices.Add(corner_2);
        vertices.Add(wall_top_2);

        uv_coords.Add(FVector2D(0.0f, 1.0f));
        uv_coords.Add(FVector2D(0.0f, 0.0f));
        uv_coords.Add(FVector2D(1.0f, 1.0f));
        uv_coords.Add(FVector2D(1.0f, 0.0f));

        int base_id = i * 4;

        if (winding)
        {
            triangles.Add(base_id + 1);
            triangles.Add(base_id);
            triangles.Add(base_id + 2);
            triangles.Add(base_id + 3);
            triangles.Add(base_id + 1);
            triangles.Add(base_id + 2);
        }
        else
        {
            triangles.Add(base_id);
            triangles.Add(base_id + 1);
            triangles.Add(base_id + 2);
            triangles.Add(base_id + 1);
            triangles.Add(base_id + 3);
            triangles.Add(base_id + 2);
        }
    }

    FOpenStreetMap_Generator_MeshInfo mesh_info;
    mesh_info.vertices = vertices;
    mesh_info.triangles = triangles;
    mesh_info.uv_coords = uv_coords;
    return mesh_info;
}
