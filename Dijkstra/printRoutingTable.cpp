#include"NetTopo.h"

//打印路由表
void NetTopo::printRoutingTable(int v, int dist[], int path[])
{
	for (int i = 0;i < numVertices;++i)
	{
		for (int j = 0;j < numVertices;++j)
			cout << Edge[i][j] << ' ';
		cout << endl;
	}
	cout << "路由器" << VerticesList[v] << "的路由表如下：" << endl;
	cout << "\t目的网络" << "\t下一跳" << endl;
	for (int i = 0;i < numVertices;++i)
	{
		if (i != v)
		{
			int k = i;
			while (path[k] != v)
			{
				k = path[k];//回溯
			}
			cout << '\t' << VerticesList[i] << '\t' << VerticesList[k] << endl;
		}
	}
};