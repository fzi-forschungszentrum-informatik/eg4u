// Copyright (c) 2023 FZI Forschungszentrum Informatik
// SPDX-License-Identifier: Apache-2.0

#include "UPlanarGraph.h"

UPlanarGraph::UPlanarGraph()
{
    PrimaryComponentTick.bCanEverTick = false;
}

void UPlanarGraph::BeginPlay()
{
	Super::BeginPlay();
}

void UPlanarGraph::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}

int32 UPlanarGraph::AddNode(const FVector NodePosition, int ID)
{
    FPlanarGraphNode Node;
    Node.Position = NodePosition;
    Node.ID = ID;
    Nodes.Add(Node);
    return Nodes.Num() - 1;
}

int32 UPlanarGraph::AddEdge(int StartNode, int EndNode, int ID, TArray<FVector> InterNodes)
{
    FPlanarGraphEdge Edge;
    Edge.ID = ID;
    Edge.StartNode = StartNode;
    Edge.EndNode = EndNode;
    Edge.InterNodes = InterNodes;
    Edges.Add(Edge);

    // Update connected edges for the nodes
    Nodes[StartNode].ConnectedEdges.Add(ID);
    Nodes[EndNode].ConnectedEdges.Add(ID);

    return Edges.Num() - 1;
}


void UPlanarGraph::FindCyclesBP()
{
    TArray<TArray<int>> cycles = this->FindCycles();
    for (auto c : cycles)
    {
        FPlanarGraphCycle cycle;
        for (auto nd : c)
        {
            FPlanarGraphNode node;
            node.ID = nd;
            cycle.Nodes.Add(node);
        }
        DetectedCycles.Add(cycle);
    }
}

TArray<TArray<int>> UPlanarGraph::FindCycles()
{
    TArray<TArray<int>> Cycles;
    TSet<int> Visited;
    TSet<int> InPath;

    for (int NodeIndex = 0; NodeIndex < Nodes.Num(); NodeIndex++)
    {
        if (!Visited.Contains(NodeIndex))
        {
            FindCyclesDFS(NodeIndex, Visited, InPath, Cycles, -1);
        }
    }

    return Cycles;
}

bool UPlanarGraph::FindCyclesDFS(int CurrentNode, TSet<int>& Visited, TSet<int>& InPath, TArray<TArray<int>>& Cycles, int ParentNode)
{
    Visited.Add(CurrentNode);
    InPath.Add(CurrentNode);

    for (int32 EdgeIndex : Nodes[CurrentNode].ConnectedEdges)
    {
        if (EdgeIndex > Edges.Num() - 1)
            continue;

        int32 Neighbor = (Edges[EdgeIndex].StartNode == CurrentNode) ? Edges[EdgeIndex].EndNode : Edges[EdgeIndex].StartNode;

        if (!Visited.Contains(Neighbor))
        {
            if (FindCyclesDFS(Neighbor, Visited, InPath, Cycles, CurrentNode))
            {
                TArray<int> Cycle;
                for (int Node : InPath)
                {
                    Cycle.Add(Node);
                    if (Node == CurrentNode)
                        break;
                }
                Cycles.Add(Cycle);
            }
        }
        else if (InPath.Contains(Neighbor) && Neighbor != ParentNode)
        {
            TArray<int> Cycle;
            for (int Node : InPath)
            {
                Cycle.Add(Node);
                if (Node == Neighbor)
                    break;
            }
            Cycles.Add(Cycle);
        }
    }

    InPath.Remove(CurrentNode);
    return false;
}

TArray<FPlanarGraphNode> UPlanarGraph::GetNodesWithMultipleEdges()
{
    TArray<FPlanarGraphNode> NodesWithMultipleEdges;
    for (FPlanarGraphNode nd : Nodes)
    {
        if (nd.ConnectedEdges.Num() > 2)
        {
            NodesWithMultipleEdges.Add(nd);
        }
    }

    return NodesWithMultipleEdges;
}


bool UPlanarGraph::IsIntersecting(FPlanarGraphEdge e1, FPlanarGraphEdge e2  ) 
{
    float x1 = Nodes[e1.StartNode].Position.X;
    float y1 = Nodes[e1.StartNode].Position.Y;

    float x2 = Nodes[e1.EndNode].Position.X;
    float y2 = Nodes[e1.EndNode].Position.Y;

    float x3 = Nodes[e2.StartNode].Position.X;
    float y3 = Nodes[e2.StartNode].Position.Y;

    float x4 = Nodes[e2.EndNode].Position.X;
    float y4 = Nodes[e2.EndNode].Position.Y;

    float m1 = (y2 - y1) / (x2 - x1);
    float m2 = (y4 - y3) / (x4 - x3);

    if (m1 == m2) 
    {
        return false;
    }

    float xi = (m1 * x1 - y1 - m2 * x3 + y3) / (m1 - m2);
    float yi = m1 * (xi - x1) + y1;

    return (xi >= FMath::Min(x1, x2) && xi <= FMath::Max(x1, x2) &&
        xi >= FMath::Min(x3, x4) && xi <= FMath::Max(x3, x4) &&
        yi >= FMath::Min(y1, y2) && yi <= FMath::Max(y1, y2) &&
        yi >= FMath::Min(y3, y4) && yi <= FMath::Max(y3, y4));
}


bool UPlanarGraph::IsIntersection(int RoadID) {
    // Check if the node is an intersection (more than two connected edges)
    return Nodes[RoadID].ConnectedEdges.Num() > 2;
}

FVector UPlanarGraph::SidewalkRightOffset(const FPlanarGraphEdge& RoadEdge)
{
    float OffsetAmount = RoadEdge.Width;  // Adjust as needed
    FVector OffsetVector = FVector(0, OffsetAmount, 0);  // Adjust the axis based on your coordinate system
    return OffsetVector;
}

FVector UPlanarGraph::SidewalkLeftOffset(const FPlanarGraphEdge& RoadEdge)
{
    float OffsetAmount = RoadEdge.Width;  // Adjust as needed
    FVector OffsetVector = FVector(0, -OffsetAmount, 0);  // Adjust the axis based on your coordinate system
    return OffsetVector;
}

void UPlanarGraph::ConnectSidewalks(int RoadID)
{
    // Iterate over the edges of the road and create sidewalk edges
    for (int EdgeID : Nodes[RoadID].ConnectedEdges) {
        FPlanarGraphEdge& RoadEdge = Edges[EdgeID];

        // Calculate the positions for the sidewalk edges
        FVector SidewalkStart = Nodes[RoadEdge.StartNode].Position;
        FVector SidewalkEnd = Nodes[RoadEdge.EndNode].Position;

        // Adjust the positions for the sidewalk width based on the presence flags
        if (RoadEdge.HasSidewalkRight) {
            SidewalkStart += SidewalkRightOffset(RoadEdge);
            SidewalkEnd += SidewalkRightOffset(RoadEdge);
        }

        if (RoadEdge.HasSidewalkLeft) {
            SidewalkStart += SidewalkLeftOffset(RoadEdge);
            SidewalkEnd += SidewalkLeftOffset(RoadEdge);
        }

        // Create a new sidewalk edge
        int SidewalkStartID = AddNode(SidewalkStart, RoadID + 5000);
        int SidewalkEndID = AddNode(SidewalkEnd, RoadID + 5000);
        TArray<FVector> NewPoints;
        int SidewalkEdgeID = AddEdge(SidewalkStartID, SidewalkEndID, RoadID + 5000, NewPoints);

        // Connect the sidewalk edge to the road node
        ConnectEdgeToNode(RoadID, SidewalkEdgeID);
    }

    // Detect intersections and handle sidewalk connectivity
    if (IsIntersection(RoadID)) {
        HandleIntersectionSidewalks(RoadID);
    }
}


void UPlanarGraph::HandleIntersectionSidewalks(int RoadID) 
{
    if (IsIntersection(RoadID)) 
    {
        TArray<int> RoadEdges = Nodes[RoadID].ConnectedEdges;
        int NumRoadEdges = RoadEdges.Num();

        for (int i = 0; i < NumRoadEdges; ++i) 
        {
            int CurrentEdgeID = RoadEdges[i];
            int NextEdgeID = RoadEdges[(i + 1) % NumRoadEdges];

            FPlanarGraphEdge& CurrentEdge = Edges[CurrentEdgeID];
            FPlanarGraphEdge& NextEdge = Edges[NextEdgeID];

            // Create rounded corners using arcs
            CreateRoundedCorner(RoadID, CurrentEdge, NextEdge);
        }
    }
}

int UPlanarGraph::ConnectEdges(int EdgeID1, int EdgeID2, int CommonNodeID) 
{
    if (Edges.IsValidIndex(EdgeID1) && Edges.IsValidIndex(EdgeID2) && Nodes.IsValidIndex(CommonNodeID)) 
    {
        FPlanarGraphEdge& Edge1 = Edges[EdgeID1];
        FPlanarGraphEdge& Edge2 = Edges[EdgeID2];

        // Ensure the common node is at the start or end of both edges
        if (Edge1.StartNode == CommonNodeID && Edge2.StartNode == CommonNodeID) 
        {
            // Reverse the vertices of Edge2 to maintain consistency?
            //Edge2.ReverseVertices();
        }
        else if (Edge1.EndNode == CommonNodeID && Edge2.EndNode == CommonNodeID) 
        {
            // No need to modify the vertices
        }
        else 
        {
            // The common node is not at the start or end of both edges
            return INDEX_NONE; // Invalid configuration
        }

        // Connect the edges by adding the ID of the second edge to the first edge's connected edges list
        Edge1.ConnectedEdges.Add(EdgeID2);

        return EdgeID1; // Return the ID of the first edge
    }

    return INDEX_NONE; // Invalid edge or node IDs
}

int UPlanarGraph::ConnectEdgeToNode(int NodeID, int EdgeID) 
{
    if (Nodes.IsValidIndex(NodeID) && Edges.IsValidIndex(EdgeID)) 
    {
        // Connect the edge to the node
        Nodes[NodeID].ConnectedEdges.Add(EdgeID);
        Edges[EdgeID].ConnectedNodes.Add(NodeID);
        return NodeID; // Return the ID of the connected node
    }
    return INDEX_NONE; // Invalid node or edge ID
}

int UPlanarGraph::CreateEdgeFromVertices(int Start, int End) 
{
    // Create a new edge using the provided vertices
    FPlanarGraphEdge NewEdge;
    NewEdge.StartNode = Start;
    NewEdge.EndNode = End;
    int32 EdgeID = Edges.Add(NewEdge);
    return EdgeID;
}

void UPlanarGraph::CreateRoundedCorner(int RoadID, const FPlanarGraphEdge& Edge1, const FPlanarGraphEdge& Edge2) 
{
    // Calculate the radius of curvature for the corner (adjust as needed)
    float Radius = 5.0f; // Change this based on your design

    // Calculate the center of the arc
    FVector Center = CalculateCornerCenter(Nodes[Edge1.EndNode].Position, Nodes[Edge2.StartNode].Position, Radius);

    // Create vertices along the arc
    TArray<FVector> ArcVertices = CreateArcVertices(Center, Radius, Nodes[Edge1.EndNode].Position, Nodes[Edge2.StartNode].Position, 90);

    // Connect the arc vertices to the road
    int32 PrevVertexID = ConnectEdgeToNode(RoadID, CreateEdgeFromVertices(Edge1.EndNode, ArcVertices[0].X));
    for (int32 i = 1; i < ArcVertices.Num(); ++i) {
        //PrevVertexID = ConnectEdges(PrevVertexID, CreateEdgeFromVertices(ArcVertices[i - 1].X, ArcVertices[i].X));
    }
    ConnectEdgeToNode(RoadID, CreateEdgeFromVertices(ArcVertices.Last().X, Edge2.StartNode));
}

FVector UPlanarGraph::CalculateCornerCenter(const FVector& Start, const FVector& End, float Radius) {
    // Calculate the center of the arc given the start and end points and the radius
    FVector Direction = End - Start;
    FVector Perpendicular = FVector(-Direction.Y, Direction.X, 0.0f).GetSafeNormal(); // Assumes a 2D plane
    return Start + Direction * 0.5f + Perpendicular * Radius;
}

TArray<FVector> UPlanarGraph::CreateArcVertices(const FVector& Center, float Radius, const FVector& Start, const FVector& End, float AngleInDegrees) {
    TArray<FVector> ArcVertices;

    // Calculate the number of segments based on the desired angle
    int32 NumSegments = FMath::CeilToInt(AngleInDegrees / 15.0f); // Adjust the segment size as needed

    // Calculate the step angle
    float StepAngle = FMath::DegreesToRadians(AngleInDegrees / NumSegments);

    for (int32 i = 0; i <= NumSegments; ++i) {
        // Calculate the angle for the current segment
        float Angle = StepAngle * i;

        // Calculate the vertex position along the arc
        FVector Vertex;
        Vertex.X = Center.X + Radius * FMath::Cos(Angle);
        Vertex.Y = Center.Y + Radius * FMath::Sin(Angle);
        Vertex.Z = Center.Z; // Assuming a 2D plane

        // Add the vertex to the list
        ArcVertices.Add(Vertex);
    }

    return ArcVertices;
}