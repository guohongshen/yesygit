#include"NetTopo.h"

//返回边(v1,v2)上的权值，若存在顶点不在图中，则函数返回0
int NetTopo::getWeight(int v1, int v2)
{
	if (v1 != -1 && v2 != -1)
		return Edge[v1][v2];
	return 0;
};