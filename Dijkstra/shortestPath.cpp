#include"NetTopo.h"

//�󶥵�v��������������·��
void NetTopo::shortestPath(int v, int dist[], int path[])
{
	cout << "����ShortestPath" << endl;
	int n = numVertices;
	bool* S = new bool[n];//���·�����㼯  bool S[n];
	int w, min;//w:;min:����ʹ�õ�inf��Ĭ��·�����ֵ
	for (int i = 0;i < n;++i)
	{
		dist[i] = getWeight(v, i);//���·�����������ʼ��
		S[i] = false;//���·������ȫ��Ϊflase
		if (i != v && dist[i] < inf)//inf��Ĭ��·�����ֵ
			path[i] = v;//����ö����ǰ��
		else
			path[i] = -1;//����û��ǰ��
	}
	S[v] = true;//������v���붥�㼯
	dist[v] = 0;//
	for (int i = 0;i < n - 1;++i)
	{
		cout << "��ѭ��" << endl;
		cout << i << "#" << endl;
		min = inf;//min:ʹ��inf��Ĭ��·�����ֵ
		int u = v;
		for (int j = 0;j < n;++j) {//ѡȡ��һ����u��������·������Ϊ������S�еĵ��·��������Сֵ��
			if (!S[j] && dist[j] < min)
			{
				u = j;
				min = dist[j];
			}
		}
		S[u] = true;//���������Ӧ��·�����Ⱦ����������·��
		for (int k = 0;k < n;++k)
		{
			cout << "��ѭ��" << endl;
			w = getWeight(u, k);//�õ�����u�����·������ȥ��������δ�ҵ����·�����ȵĵ�
			cout << w << endl;
			if (!S[k] && w < inf && dist[u] + w < dist[k])
			{
				cout << "�����̱�" << endl;
				dist[k] = dist[u] + w;//�������·������
				path[k] = u;//�޸ĵ�k�����·��
			}
		}
	}
	for (int i = 0;i < numVertices;++i) {
		cout << "i" << "*" << path[i] << endl;
	}
};