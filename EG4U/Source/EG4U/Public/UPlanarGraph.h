// Copyright (c) 2023 FZI Forschungszentrum Informatik
// SPDX-License-Identifier: Apache-2.0

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"

#include "UPlanarGraph.generated.h"


USTRUCT(BlueprintType)
struct EG4U_API FPlanarGraphNode
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	int ID;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	FVector Position;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TArray<int> ConnectedEdges;
};

USTRUCT(BlueprintType)
struct EG4U_API FPlanarGraphEdge
{
	GENERATED_USTRUCT_BODY()
		
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	int ID;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	int StartNode;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	int EndNode;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TArray<FVector> InterNodes;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	float Width;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool HasSidewalkRight;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	bool HasSidewalkLeft;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TArray<int> ConnectedEdges;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TArray<int> ConnectedNodes;
};

USTRUCT(BlueprintType)
struct EG4U_API FPlanarGraphCycle
{
	GENERATED_USTRUCT_BODY()
		
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TArray<FPlanarGraphNode> Nodes;
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class EG4U_API UPlanarGraph : public UActorComponent
{
	GENERATED_BODY()

public:

	UPlanarGraph();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TArray<FPlanarGraphNode> Nodes;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TArray<FPlanarGraphEdge> Edges;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	TArray<FPlanarGraphCycle> DetectedCycles;

protected:
	virtual void BeginPlay() override;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable, Category = libPlanarGraph)
	int32 AddNode(const FVector NodePosition, int ID);

	UFUNCTION(BlueprintCallable, Category = libPlanarGraph)
	int32 AddEdge(int StartNode, int EndNode, int ID, TArray<FVector> InterNodes);

	UFUNCTION(BlueprintCallable, Category = libPlanarGraph)
	void FindCyclesBP();

	// Find cycles in graph using depth first search
	TArray<TArray<int>> FindCycles();

	// helper / worker for finding cycles
	bool FindCyclesDFS(int CurrentNode, TSet<int>& Visited, TSet<int>& InPath, TArray<TArray<int>>& Cycles, int ParentNode);

	UFUNCTION(BlueprintCallable, Category = libPlanarGraph)
	TArray<FPlanarGraphNode> GetNodesWithMultipleEdges();

	UFUNCTION(BlueprintCallable, Category = libPlanarGraph)
	bool IsIntersecting(FPlanarGraphEdge e1, FPlanarGraphEdge e2);

	UFUNCTION(BlueprintCallable, Category = libPlanarGraph)
	bool IsIntersection(int RoadID);

	UFUNCTION(BlueprintCallable, Category = libPlanarGraph)
	FVector SidewalkRightOffset(const FPlanarGraphEdge& RoadEdge);

	UFUNCTION(BlueprintCallable, Category = libPlanarGraph)
	FVector SidewalkLeftOffset(const FPlanarGraphEdge& RoadEdge);

	UFUNCTION(BlueprintCallable, Category = libPlanarGraph)
	void ConnectSidewalks(int RoadID);

	UFUNCTION(BlueprintCallable, Category = libPlanarGraph)
	void HandleIntersectionSidewalks(int RoadID);

	UFUNCTION(BlueprintCallable, Category = libPlanarGraph)
	int ConnectEdges(int EdgeID1, int EdgeID2, int CommonNodeID);

	UFUNCTION(BlueprintCallable, Category = libPlanarGraph)
	int ConnectEdgeToNode(int32 NodeID, int32 EdgeID);

	UFUNCTION(BlueprintCallable, Category = libPlanarGraph)
	int CreateEdgeFromVertices(int Start, int End);

	UFUNCTION(BlueprintCallable, Category = libPlanarGraph)
	void CreateRoundedCorner(int RoadID, const FPlanarGraphEdge& Edge1, const FPlanarGraphEdge& Edge2);

	UFUNCTION(BlueprintCallable, Category = libPlanarGraph)
	FVector CalculateCornerCenter(const FVector& Start, const FVector& End, float Radius);

	UFUNCTION(BlueprintCallable, Category = libPlanarGraph)
	TArray<FVector> CreateArcVertices(const FVector& Center, float Radius, const FVector& Start, const FVector& End, float AngleInDegrees);

};
