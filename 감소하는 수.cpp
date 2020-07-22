#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//int comb[10000][10000]={0};
int combination(int n, int r);
int main(){
	int n;
	cin>>n;
	
	int temp=9;
	int count=2;
	while(temp<n){
	temp=temp+combination(10,count);		
	count++;
	}
	count--;
	temp=temp-combination(10,count);
	
	int index=n-temp;
	
	cout<<count<<"\n";
	cout<<temp<<"\n";
	cout<<index;
	
	vector <int> iv;
	int start=1;
	for(int i=0;i<n;i++){
		start=start*10;
	}
	for(int i=start;i<start*10;i==){
		iv.push_back(i);
	}
	
	
	return 0; 
}

int combination(int n, int r){
	if(n==r||r==0) return 1;
//	else if(comb[n][r]!=0) return comb[n][r];
	else return combination(n-1,r-1)+combination(n-1,r);
}
