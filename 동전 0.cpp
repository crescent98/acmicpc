#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int N, K;
	cin>>N>>K;
	vector<int> iv;
	
	int temp=0;
	for(int i=0;i<N;i++){
		cin>>temp;
		iv.push_back(temp);
	}
	sort(iv.begin(),iv.end());
	reverse(iv.begin(),iv.end());
	
	int count=0;
	int temp2=0;
	for(int i=0;i<N;i++){
		temp2=iv[i];
		while(K-temp2>=0){
			K=K-temp2;
			count++;
		}
		if (K==0) break;
	}
	cout<<count;
}
