#include"NetTopo.h"

//ɾ���ڵ�v����صı�
bool NetTopo::removeVertex(int v)
{
	if (v<0 || v>numVertices)//����v������ͼ��
		return false;
	if (numVertices == 1)//��ֻʣһ������ʱ��������ɾ��
		return false;
	VerticesList[v] = VerticesList[numVertices - 1];//���ȴӶ������ɾ���ö���

	//���¼��㵱ǰ�����еı�������ȥ�ٵ��ıߣ�
	for (int i = 0;i < numVertices;++i)
	{
		if (Edge[i][v] > 0 && Edge[i][v] < inf)
			numEdges--;
	}
	//ʹ�����һ�����v��
	for (int i = 0;i < numVertices;++i)
		Edge[i][v] = Edge[i][numVertices - 1];
	numVertices--;
	//ʹ�����һ�����v��
	for (int i = 0;i < numVertices;++i)
		Edge[v][i] = Edge[numVertices][i];
	return true;
};