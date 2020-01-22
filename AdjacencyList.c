#include<stdio.h>
#include "AdjacencyList.h"

void  AddNewEdgeInGraph(Graph *g, int src, int dest)
{
	AdjacencyNode *NewNode = (AdjacencyNode *)malloc(sizeof(AdjacencyNode));
	//add node at begin
	NewNode->next = g->ArrayOfPointer_adjList[src].head;
	g->ArrayOfPointer_adjList[src].head = NewNode;
	NewNode->data = dest;

	//since graph is undirected , add an edge from destination to source also
	AdjacencyNode *NewNode1 = (AdjacencyNode *)malloc(sizeof(AdjacencyNode));
	NewNode1->next = g->ArrayOfPointer_adjList[dest].head;
	g->ArrayOfPointer_adjList[dest].head = NewNode1;
	NewNode1->data = src;

	
}

Graph*  CreateNewVertexInGraph(int totalvertex)
{
	Graph *graph = (Graph *)malloc(sizeof(Graph));

	graph->v = totalvertex;
	graph->ArrayOfPointer_adjList = (AdjacencyList *)malloc(sizeof(AdjacencyList)*totalvertex);

	for (int i = 0; i < totalvertex; i++)
	{
		graph->ArrayOfPointer_adjList[i].head = NULL;
	}
	return graph;
}

void DisplayGraph(Graph *graph)
{
	for (int i = 0; i < graph->v; i++)
	{
		AdjacencyNode *adjlistptr = graph->ArrayOfPointer_adjList[i].head;
		printf("%d------>",i );
		while (adjlistptr != NULL)
		{
			printf("%d->", adjlistptr->data);
			adjlistptr = adjlistptr->next;
		}
		printf("\n");
	}
}