#include"NetTopo.h"

//É¾³ı±ß(v1,v2)
bool NetTopo::removeEdge(int v1, int v2)
{
	if (v1 > -1 && v1<maxVertices && v2>-1 && v2 < maxVertices && Edge[v1][v2]>0 && Edge[v1][v2] < inf)
	{
		Edge[v1][v2] = Edge[v2][v1] = inf;
		numEdges--;
		return true;
	}
	else
		return false;
};