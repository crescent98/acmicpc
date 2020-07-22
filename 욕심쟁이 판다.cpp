#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>

using namespace std;

int main(){
	int n;
	cin>>n;
	
	vector <int> sorts;
	vector <tuple <int,int>> max;
	vector <tuple <int,int>> maps;
	//vector <tuple <int,int>> cor[count] ;
	
	int count=n*n;
	int temp=0;
	int map[n+2][n+2]={0};
		
	// map 만들기 
	for(int i=0;i<n+2;i++){
		for(int j=0;j<n+2;j++){
			map[i][j]=-1;
		}
	}
	
	// map 그리고 sorting 하기 
	for(int i=1;i<n+1;i++){
		for(int j=1;j<n+1;j++){
			cin>>temp;
			map[i][j]=temp;
			sorts.push_back(temp);
		}
	}
	sort(sorts.begin(),sorts.end());

	// map에 숫자를 순서로 바꾸기 
	for(int i=1;i<n+1;i++){
		for(int j=1;j<n+1;j++){
		vector<int>::iterator it = find(sorts.begin(), sorts.end(), map[i][j]);
		map[i][j]=*it;
		}
	}
	
	// print map
	for(int i=0;i<n+2;i++){
		for(int j=0;j<n+2;j++){
			cout<<map[i][j]<<"  ";
		}
		cout<<"\n";
	}
	
	int max_count=0;
	// find max
	for(int i=1;i<n+1;i++){
		for(int j=1;j<n+1;j++){
			temp=map[i][j];
			if(map[i+1][j]<temp&&
			map[i][j+1]<temp&&
			map[i-1][j]<temp&&
			map[i][j-1]<temp){
			max_count++;		 
			max.push_back(make_tuple(i,j));
			}
		}
	}
	
	// 탐색
	 int k=0;
	 int x,y;
	 while(maps.empty()){ // 비어있을때  
		temp=maps.size();
		for(int i=0;i<temp;i++){
			x=get<0>(maps[i]);
			y=get<1>(maps[i]);
			if(map[x][y]>map[x+1][y]){
				
			}
			
			else if(map[x][y]<map[x-1][y]){
				
			}
			
			else if(map[x][y]>map[x][y+1]){
				
			}
			
			else if(map[x][y]>map[x][y-1]){
				
			}
			
		}
		maps.push_back();
	 	 
	 }
	
	return 0;
}
