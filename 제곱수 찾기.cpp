#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int N, M;
	cin>>N>>M;
	
	int board[10][10];
	int temp_y[10];
	int temp;
	vector <int> iv;
	
	for(int i=0;i<N;i++){
		cin>>temp_y[i];
		temp=temp_y[i];
		for(int j=M-1;j!=-1;j--){
		board[i][j]=temp%10;
		iv.push_back(temp%10);
		temp=temp/10;
	}
	} 
	

	sort(iv.begin(),iv.end(),greater<int>());
	
	vector<int>::iterator ptr;
	int max=0;
	for(ptr=iv.begin();ptr!=iv.end();++ptr){
		max=10*max+*ptr;
	}
	cout<<max;
	
	
}
