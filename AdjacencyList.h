#pragma once

//A Structure for Adjacency Node

typedef struct AdjacencyNode
{
	int data;
	struct AdjacencyNode *next;
}AdjacencyNode;

//A Sructure for array of Adjacency Node List
typedef struct  AdjacencyList
{
	AdjacencyNode *head;
}AdjacencyList;

//A Structure of Graph
typedef struct Graph
{
	int v;	//source location
	AdjacencyList *ArrayOfPointer_adjList;
}Graph;



void  AddNewEdgeInGraph(Graph *g, int src, int dest);
Graph*  CreateNewVertexInGraph(int vertex);
void DisplayGraph(Graph *graph);