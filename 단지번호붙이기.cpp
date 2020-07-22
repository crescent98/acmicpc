#include <bits/stdc++.h>
#define MAX_LEN 25
using namespace std;
using std::cin;
using std::cout;

class Graph{
	int V;
	list<int> *adj;
	void DFSUtil(int V, bool visited[]);
	public:
		Graph(int V);
		void addEdge(int v, int w);
		void DFS(int v);
};

Graph::Graph(int V){
	this->V=V;
	adj=new list<int>[V];
}

void Graph::addEdge(int v, int w){
	adj[v].push_back(w);
}

void Graph::DFSUtil(int V,bool visited[]){
	visited[V]=true;
	cout<<V<<" ";
	list<int>::iterator i;
	for(i=adj[V].begin();i!=adj[V].end();i++){
		if(!visited[*i]){
			DFSUtil(*i,visited);
		}
	}
}

void Graph::DFS(int V){
	bool *visited=new bool[V];
	for(int i=0;i<V;i++){
		visited[i]=false;
	}
	DFSUtil(V,visited);
}

int main(){
	int node[MAX_LEN][MAX_LEN];
	int vil[MAX_LEN][MAX_LEN];
	
	// �ʱ������� ��� -1 
	for (int i=0;i<MAX_LEN;i++){
		for (int j=0;j<MAX_LEN;j++){
			vil[i][j]=-1;
			node[i][j]=0;
		}
	}
	
	char temp[MAX_LEN][MAX_LEN];
	int len;
	int sum=0;
	
	cin>>len;
	cout<<len<<"\n";
	 
	for (int i=0;i<len;i++){
		cin>>temp[i];
	}
	
	int k=0; // ����� ���� (i,j) -> ����ȣ �̷� ��� 
	for(int i=0;i<len;i++){
		for (int j=0;j<len;j++){
			vil[i+1][j+1]=int(temp[i][j])-48; //temp�� ���� int������ village �� 
			if (vil[i+1][j+1]==1){ // ������ 1�� �� ��尪�� 1�� �ٲٱ� 
				sum++;
				node[i+1][j+1]=k;
				k++;
			}
		}
	}
	
	cout<<"pause1\n";
	// Graph �� �� �����
	Graph g(sum);
	
	for(int i=1;i<len+1;i++){
		for (int j=1;j<len+1;j++){
			cout<<node[i][j];
		}
		cout<<"\n";
	}
	
	// ����� ���� ���� ���ϱ� 
	for(int i=1;i<len+1;i++){
		for (int j=1;j<len+1;j++){
			cout<<i<<","<<j<<"node ��"<<node[i][j]<<"\n"; 
		// 1�� ���� ���
			if(vil[i][j]==1){
				for(int h=-1;h<2;h++){ //������� ��� Ȯ���ϱ� 
					for(int l=-1;l<2;l++){
						if (vil[i+h][j+l]==1){ // ���� ��Ŀ� 1 �ִ°��
						if (h==0&&l==0){
							continue;
						}
						// �����Ѵ�
						g.addEdge(node[i][j],node[i+h][j+l]);
						cout<<"added"<<node[i][j]<<"to"<<node[i+h][j+l]<<"\n";
						} 
					}
				}
			}	
		}
	}
	cout<<"pause2\n";
	// �׷��� ���ؼ� �� ������
	for(int i=1;i<len+1;i++){
		for(int j=1;j<len+1;j++){
			if(vil[i][j]==1){
				cout<<i<<"and"<<j<<"  start DFS\n";
				g.DFS(node[i][j]);
				cout<<"\n";
			}
		}
	}
		return 0;
	}	
