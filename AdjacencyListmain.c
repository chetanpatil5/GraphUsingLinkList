#include<stdio.h>
#include "AdjacencyList.h"

int main()
{
	int ch = 0;
	char choice = '\0';
	int total_vertices = 5;

	//Create a Pointer of Graph structure
	Graph *graph = CreateNewVertexInGraph(total_vertices);

	
	AddNewEdgeInGraph(graph, 0, 1);
	AddNewEdgeInGraph(graph, 0, 2);
	AddNewEdgeInGraph(graph, 2, 1);
	

	DisplayGraph(graph);

	return 0;
}