#include<iostream>
#include<fstream>
#include"NetTopo.h"

int main()
{
	int l = -1;
	int j = -1;
	int cost = -1;
	NetTopo G;
	//ifstream fin;
	//fin.open("NetTopo.txt", ios_base::in);
	//if (!fin) {
	//	exit(1);
	//}
	for (int k = 0;k < 4;++k) {
		G.insertVertex(k);
	}
	G.insertEdge(0, 1, 3);
	G.insertEdge(0, 3, 4);
	G.insertEdge(2, 3, 1);
	G.insertEdge(0, 2, 7);
	//for (int i = 0;i < 4;++i)
	//{
	//	fin >> l;
	//	fin >> j;
	//	fin >> cost;
	//	cout << l;
	//	cout << j;
	//	cout << cost;
	//	cout << "ÊäÈë";
	//	system("pause");
	//	G.insertEdge(l, j, cost);
	//}
	int v = G.getVertexPos(0);
	int dist[100];
	int path[100];
	G.shortestPath(v, dist, path);
	G.printRoutingTable(v, dist, path);
};