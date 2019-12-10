#include"NetTopo.h"

//顶点插入函数
bool NetTopo::insertVertex(int v)
{
	//判断是否还有空位置
	if (numVertices == maxVertices)
		return false;
	VerticesList[numVertices] = v;
	++numVertices;
};