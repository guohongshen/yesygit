#include"NetTopo.h"

//������뺯��
bool NetTopo::insertVertex(int v)
{
	//�ж��Ƿ��п�λ��
	if (numVertices == maxVertices)
		return false;
	VerticesList[numVertices] = v;
	++numVertices;
};