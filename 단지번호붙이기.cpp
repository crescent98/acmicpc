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
	
	// 초기지도는 모두 -1 
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
	
	int k=0; // 노드의 숫자 (i,j) -> 노드번호 이런 방식 
	for(int i=0;i<len;i++){
		for (int j=0;j<len;j++){
			vil[i+1][j+1]=int(temp[i][j])-48; //temp의 값을 int형식의 village 로 
			if (vil[i+1][j+1]==1){ // 지도가 1일 때 노드값도 1로 바꾸기 
				sum++;
				node[i+1][j+1]=k;
				k++;
			}
		}
	}
	
	cout<<"pause1\n";
	// Graph 한 개 만들기
	Graph g(sum);
	
	for(int i=1;i<len+1;i++){
		for (int j=1;j<len+1;j++){
			cout<<node[i][j];
		}
		cout<<"\n";
	}
	
	// 행렬의 인접 정도 구하기 
	for(int i=1;i<len+1;i++){
		for (int j=1;j<len+1;j++){
			cout<<i<<","<<j<<"node 는"<<node[i][j]<<"\n"; 
		// 1이 나온 경우
			if(vil[i][j]==1){
				for(int h=-1;h<2;h++){ //인접행렬 모두 확인하기 
					for(int l=-1;l<2;l++){
						if (vil[i+h][j+l]==1){ // 인접 행렬에 1 있는경우
						if (h==0&&l==0){
							continue;
						}
						// 연결한다
						g.addEdge(node[i][j],node[i+h][j+l]);
						cout<<"added"<<node[i][j]<<"to"<<node[i+h][j+l]<<"\n";
						} 
					}
				}
			}	
		}
	}
	cout<<"pause2\n";
	// 그래프 통해서 맵 뒤집기
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
