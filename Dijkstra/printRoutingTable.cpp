#include"NetTopo.h"

//��ӡ·�ɱ�
void NetTopo::printRoutingTable(int v, int dist[], int path[])
{
	for (int i = 0;i < numVertices;++i)
	{
		for (int j = 0;j < numVertices;++j)
			cout << Edge[i][j] << ' ';
		cout << endl;
	}
	cout << "·����" << VerticesList[v] << "��·�ɱ����£�" << endl;
	cout << "\tĿ������" << "\t��һ��" << endl;
	for (int i = 0;i < numVertices;++i)
	{
		if (i != v)
		{
			int k = i;
			while (path[k] != v)
			{
				k = path[k];//����
			}
			cout << '\t' << VerticesList[i] << '\t' << VerticesList[k] << endl;
		}
	}
};