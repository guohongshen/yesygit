#include"NetTopo.h"

//���������ڶ�����е��±�
int NetTopo::getVertexPos(int v)
{
	for (int i = 0;i < numVertices;++i)
	{
		if (VerticesList[i] == v)
			return i;
	}
	return -1;
};