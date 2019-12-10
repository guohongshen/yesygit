#include"NetTopo.h"

//给出顶点在顶点表中的下标
int NetTopo::getVertexPos(int v)
{
	for (int i = 0;i < numVertices;++i)
	{
		if (VerticesList[i] == v)
			return i;
	}
	return -1;
};