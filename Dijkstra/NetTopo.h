#include<iostream>
#include<vector>
using namespace std;
const int DefaultVertices = 200;  //Ĭ�ϵ����˵���󶥵���
const int inf = 1000;//���Ȩֵ
class NetTopo
{
private:
	int* VerticesList;//�����
	int** Edge;//�ڽӾ���
	int maxVertices;//��������󶥵���
	int numEdges;//��ǰ�����еı���
	int numVertices;//��ǰ�������еĶ�����
public:
	NetTopo(int sz = DefaultVertices);//���캯��
	bool insertVertex(int v);//���붥��
	int getVertexPos(int v);//���������ڶ�����е��±�
	int getWeight(int v1, int v2);//���ر�(v1,v2)�ϵ�Ȩֵ�������ڶ��㲻��ͼ�У���������0
	bool insertEdge(int v1, int v2, int cost);//�����(v1,v2),ȨֵΪcost
	bool removeVertex(int v);//ɾ������v����صı�
	bool removeEdge(int v1, int v2);//ɾ����(v1,v2)
	void shortestPath(int v, int dist[], int path[]);//�󶥵�v��������������·��
	void printRoutingTable(int v, int dist[], int path[]);//��ӡ·����v��·�ɱ�
};