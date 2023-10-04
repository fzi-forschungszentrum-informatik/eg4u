// Copyright (c) 2023 FZI Forschungszentrum Informatik
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/UObjectIterator.h"
#include "Engine/World.h"
#include "AssetRegistryModule.h" 

#include "RawMesh.h" 
#include "ProceduralMeshComponent.h" 
#include "Components/SplineComponent.h"
#include "Runtime/Engine/Classes/Engine/StaticMesh.h"

#include "ThirdParty/libOpenDRIVE/include/ThirdParty/pugixml/pugixml.hpp"

#include "OpenStreetMap_Generator.generated.h"

UENUM(BlueprintType)
enum EOpenStreetMap_RoofType
{
	Flat,
	Gabled,
	Hipped,
	Pyramidal,
	Sawtooth,
};

USTRUCT(BlueprintType)
struct EG4U_API FOpenStreetMap_Generator_MeshInfo
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TArray<FVector> vertices;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
    TArray<int> triangles;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TArray<FVector2D> uv_coords;
};

USTRUCT(BlueprintType)
struct EG4U_API FOpenStreetMap_Generator_Node
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	int id;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	FVector coord;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TMap<FString, FString> tags;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TArray<int> connections;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TArray<bool> connection_start;
};


USTRUCT(BlueprintType)
struct EG4U_API FOpenStreetMap_Generator_Way
{
	GENERATED_USTRUCT_BODY()
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	int id;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TArray<int> nd_ref;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TMap<FString, FString> tags;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TArray<FVector> ref_line;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TArray<int> connections;
};

USTRUCT(BlueprintType)
struct EG4U_API FOpenStreetMap_Generator_Member
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	FString type;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	int ref;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	FString role;
};

USTRUCT(BlueprintType)
struct EG4U_API FOpenStreetMap_Generator_Relation
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	int id;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TArray<FOpenStreetMap_Generator_Member> members;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TMap<FString, FString> tags;
};


UCLASS()
class EG4U_API AOpenStreetMap_Generator : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AOpenStreetMap_Generator();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	float step_size = 0.25f;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	float x_offset;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	float y_offset;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	float minlat;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	float minlon;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	float maxlat;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	float maxlon;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TArray<FOpenStreetMap_Generator_Node> nodes;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TArray<FOpenStreetMap_Generator_Way> ways;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TArray<FOpenStreetMap_Generator_Relation> relations;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TArray<int> shared_nodes;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TArray<FOpenStreetMap_Generator_Way> connected_ways;

//	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
//	TArray<UProceduralMeshComponent> mesh_components;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// File handler
	pugi::xml_document xml_doc;

	TMap<FString, int> node_map;
	TMap<FString, int> way_map;
	TMap<FString, int> rel_map;

public:	

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = libOpenStreetMap)
	void ClearOpenStreetMap();

	FVector LatLonToXY(double lat, double lon);

	FVector2D XYToLatLon(double x, double y);

	UFUNCTION(BlueprintCallable, Category = libOpenStreetMap)
	FVector2D GetCentroid(TArray<FVector> poly);
		
	UFUNCTION(BlueprintCallable, Category = libOpenStreetMap)
	TArray<FVector> ScalePolygon(TArray<FVector>& polygon, float scale, FVector pivot, float z);

	UFUNCTION(BlueprintCallable, Category = libOpenStreetMap)
	TArray<FVector> OffsetPolygon(TArray<FVector> poly, float offset, float z);

	UFUNCTION(BlueprintCallable, Category = libOpenStreetMap)
	FVector CatmullRomSpline(float t, FVector P0, FVector P1, FVector P2, FVector P3);

	UFUNCTION(BlueprintCallable, Category = libOpenStreetMap)
	TArray<FVector> GenerateArcPoints(FVector PointA, FVector PointB, FVector ArcDirection, int NumPoints);

	UFUNCTION(BlueprintCallable, Category = libOpenStreetMap)
	UStaticMesh* MakeStaticMesh(UProceduralMeshComponent* ProcMesh, FString PathName, FString AssetName);

	UFUNCTION(BlueprintCallable, Category = libOpenStreetMap)
	void ImportOpenStreetMap(float sample_rate, bool modify_eps, FVector center, float scale, bool flat, FString filename);

	UFUNCTION(BlueprintCallable, Category = libOpenStreetMap)
	TArray<int> FindSharedNodes();

	UFUNCTION(BlueprintCallable, Category = libOpenStreetMap)
	void InsertNodesBetweenSharedAndNearest();

	UFUNCTION(BlueprintCallable, Category = libOpenStreetMap)
	void ConnectSharedNodes();

	UFUNCTION(BlueprintCallable, Category = libOpenStreetMap)
	void RefineRoadSegments();

	UFUNCTION(BlueprintCallable, Category = libOpenStreetMap)
	FOpenStreetMap_Generator_MeshInfo GenerateOSMRoad(TArray<FVector> ref_line, TMap<FString, FString> osm_tags, int lane_number, float lane_width, float sidewalkWidth, float sidewalkHeight, int resolution);

	UFUNCTION(BlueprintCallable, Category = libOpenStreetMap)
	TArray<FVector2D> GenerateRoadUVs(FVector road_start, FVector road_end, FVector width, TArray<FVector> vertices);

	UFUNCTION(BlueprintCallable, Category = libOpenStreetMap)
	TArray<FOpenStreetMap_Generator_MeshInfo> FindEnclosedAreaPolygons(FOpenStreetMap_Generator_Way startRoad, TArray<FOpenStreetMap_Generator_Way> roads);

	UFUNCTION(BlueprintCallable, Category = libOpenStreetMap)
	FOpenStreetMap_Generator_MeshInfo GenerateSidewalks(TArray<FVector> ref_line);
	
	UFUNCTION(BlueprintCallable, Category = libOpenStreetMap)
	FOpenStreetMap_Generator_MeshInfo GenerateSurfaces(TArray<FVector> area);
	
	UFUNCTION(BlueprintCallable, Category = libOpenStreetMap)
	FOpenStreetMap_Generator_MeshInfo GenerateRoof(TArray<FVector> footprint, TMap<FString, FString> osm_tags, EOpenStreetMap_RoofType roof_type, float roof_height, float roof_size);
	
	UFUNCTION(BlueprintCallable, Category = libOpenStreetMap)
	FOpenStreetMap_Generator_MeshInfo GenerateBuilding(TArray<FVector> footprint, TMap<FString, FString> osm_tags, int default_levels, EOpenStreetMap_RoofType roof_type, float roof_size);
	
	UFUNCTION(BlueprintCallable, Category = libOpenStreetMap)
	static bool TriangulatePolygonInPlace(TArray<FVector2D>& Polygon, TArray<int32>& TempIndices, TArray<int32>& TriangulatedIndices, bool& OutWindsClockwise)
	{
		checkSlow(&TempIndices != &TriangulatedIndices);
		TriangulatedIndices.Reset();
		OutWindsClockwise = false;

		int32 NumVertices = Polygon.Num();
		if (NumVertices < 3)
		{
			return false;
		}
		TempIndices.SetNumUninitialized(NumVertices);
		int32* VertexIndices = TempIndices.GetData();

		OutWindsClockwise = Area(Polygon) < 0.0f;
		if (!OutWindsClockwise)
		{
			for (int32 PointIndex = 0; PointIndex < NumVertices; PointIndex++)
			{
				VertexIndices[PointIndex] = PointIndex;
			}
		}
		else
		{
			for (int32 PointIndex = 0; PointIndex < NumVertices; PointIndex++)
			{
				VertexIndices[PointIndex] = (NumVertices - 1) - PointIndex;
			}
		}

		int32 ErrorDetectionCounter = 2 * NumVertices;
		for (int32 V = NumVertices - 1; NumVertices > 2; )
		{
			if (--ErrorDetectionCounter <= 0)
			{
				return false;
			}
			const int32 U = (V < NumVertices) ? V : 0;
			V = ((U + 1) < NumVertices) ? U + 1 : 0;
			const int32 W = ((V + 1) < NumVertices) ? V + 1 : 0;

			if (Snip(Polygon, U, V, W, NumVertices, VertexIndices))
			{
				TriangulatedIndices.Add(VertexIndices[U]);
				TriangulatedIndices.Add(VertexIndices[V]);
				TriangulatedIndices.Add(VertexIndices[W]);

				for (int32 S = V, T = V + 1; T < NumVertices; S++, T++)
				{
					VertexIndices[S] = VertexIndices[T];
				}
				NumVertices--;
				ErrorDetectionCounter = 2 * NumVertices;
			}
		}

		return true;
	}

	UFUNCTION(BlueprintCallable, Category = libOpenStreetMap)
	static bool OutWindsClockwise(TArray<FVector> Polygon)
	{
		TArray<FVector2D> poly;
		for (FVector v : Polygon)
		{
			poly.Add(FVector2D(v));
		}

		const int32 PointCount = poly.Num();
		float HalfArea = 0.0f;
		for (int32 P = PointCount - 1, Q = 0; Q < PointCount; P = Q++)
		{
			HalfArea += poly[P].X * poly[Q].Y - poly[Q].X * poly[P].Y;
		}
		return (HalfArea * 0.5f) < 0.f;
	}

	static float Area(TArray<FVector2D>& Polygon)
	{
		const int32 PointCount = Polygon.Num();
		float HalfArea = 0.0f;
		for (int32 P = PointCount - 1, Q = 0; Q < PointCount; P = Q++)
		{
			HalfArea += Polygon[P].X * Polygon[Q].Y - Polygon[Q].X * Polygon[P].Y;
		}
		return HalfArea * 0.5f;
	}

	static bool IsPointInsideTriangle(FVector2D TriangleA, FVector2D TriangleB, FVector2D TriangleC, FVector2D Point)
	{
		// decide if point Px/Py is inside triangle defined by
		// (Ax,Ay) (Bx,By) (Cx,Cy)
		const FVector2D BToC = TriangleC - TriangleB;
		const FVector2D CToA = TriangleA - TriangleC;
		const FVector2D AToB = TriangleB - TriangleA;

		const FVector2D AToP = Point - TriangleA;
		const FVector2D BToP = Point - TriangleB;
		const FVector2D CToP = Point - TriangleC;

		const float ACrossBP = BToC ^ BToP;
		const float CCrossAP = AToB ^ AToP;
		const float BCrossCP = CToA ^ CToP;

		return ((ACrossBP >= -SMALL_NUMBER) && (BCrossCP >= -SMALL_NUMBER) && (CCrossAP >= -SMALL_NUMBER));
	};

	static bool IsPointInsidePolygon(TArray<FVector2D>& Polygon, FVector2D Point)
	{
		const int NumCorners = Polygon.Num();
		int PreviousCornerIndex = NumCorners - 1;
		bool bIsInside = false;

		for (int CornerIndex = 0; CornerIndex < NumCorners; CornerIndex++)
		{
			if (((Polygon[CornerIndex].Y < Point.Y && Polygon[PreviousCornerIndex].Y >= Point.Y) || (Polygon[PreviousCornerIndex].Y < Point.Y && Polygon[CornerIndex].Y >= Point.Y)) &&
				(Polygon[CornerIndex].X <= Point.X || Polygon[PreviousCornerIndex].X <= Point.X))
			{
				bIsInside ^= (Polygon[CornerIndex].X + (Point.Y - Polygon[CornerIndex].Y) / (Polygon[PreviousCornerIndex].Y - Polygon[CornerIndex].Y) * (Polygon[PreviousCornerIndex].X - Polygon[CornerIndex].X) < Point.X);
			}

			PreviousCornerIndex = CornerIndex;
		}

		return bIsInside;
	}

	static bool Snip(TArray<FVector2D>& Polygon, int U, int V, int W, int PointCount, int32* VertexIndices)
	{
		const FVector2D A = Polygon[VertexIndices[U]];
		const FVector2D B = Polygon[VertexIndices[V]];
		const FVector2D C = Polygon[VertexIndices[W]];

		if (SMALL_NUMBER > (((B.X - A.X) * (C.Y - A.Y)) - ((B.Y - A.Y) * (C.X - A.X))) &&
			(A - B).SizeSquared() > SMALL_NUMBER &&
			(A - C).SizeSquared() > SMALL_NUMBER &&
			(C - A).SizeSquared() > SMALL_NUMBER)
		{
			return false;
		}

		for (int32 PointIndex = 0; PointIndex < PointCount; ++PointIndex)
		{
			if ((PointIndex == U) || (PointIndex == V) || (PointIndex == W))
			{
				continue;
			}

			if (IsPointInsideTriangle(A, B, C, Polygon[VertexIndices[PointIndex]]))
			{
				return false;
			}
		}

		return true;
	}
};
