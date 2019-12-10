#include"NetTopo.h"

//求顶点v到各个顶点的最短路径
void NetTopo::shortestPath(int v, int dist[], int path[])
{
	cout << "进入ShortestPath" << endl;
	int n = numVertices;
	bool* S = new bool[n];//最短路径顶点集  bool S[n];
	int w, min;//w:;min:后期使用的inf：默认路径最大值
	for (int i = 0;i < n;++i)
	{
		dist[i] = getWeight(v, i);//最短路径长度数组初始化
		S[i] = false;//最短路径数组全置为flase
		if (i != v && dist[i] < inf)//inf：默认路径最大值
			path[i] = v;//保存该顶点的前驱
		else
			path[i] = -1;//否则没有前驱
	}
	S[v] = true;//将顶点v加入顶点集
	dist[v] = 0;//
	for (int i = 0;i < n - 1;++i)
	{
		cout << "大循环" << endl;
		cout << i << "#" << endl;
		min = inf;//min:使用inf：默认路径最大值
		int u = v;
		for (int j = 0;j < n;++j) {//选取：一个点u，且它的路径长度为（不在S中的点的路径）的最小值。
			if (!S[j] && dist[j] < min)
			{
				u = j;
				min = dist[j];
			}
		}
		S[u] = true;//这个点所对应的路径长度就是它的最短路径
		for (int k = 0;k < n;++k)
		{
			cout << "内循环" << endl;
			w = getWeight(u, k);//用到顶点u的最短路径长度去更新其他未找到最短路径长度的点
			cout << w << endl;
			if (!S[k] && w < inf && dist[u] + w < dist[k])
			{
				cout << "替代最短边" << endl;
				dist[k] = dist[u] + w;//更新最短路径长度
				path[k] = u;//修改到k的最短路径
			}
		}
	}
	for (int i = 0;i < numVertices;++i) {
		cout << "i" << "*" << path[i] << endl;
	}
};