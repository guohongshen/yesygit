#include"NetTopo.h"

//���ر�(v1,v2)�ϵ�Ȩֵ�������ڶ��㲻��ͼ�У���������0
int NetTopo::getWeight(int v1, int v2)
{
	if (v1 != -1 && v2 != -1)
		return Edge[v1][v2];
	return 0;
};