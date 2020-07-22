#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int N;
	cin>>N;
	vector <int> iv;
	int temp;
	int me;
	
	for(int i=0;i<N;i++){
		if(i==0) cin>>me;
		else{
			cin>>temp;
			iv.push_back(temp);	
		}
	}
	if(N==1){
		cout<<0;
		return 0;
	}
	int count=0;
	int max_idx;
	while(*max_element(iv.begin(),iv.end())>=me){
		max_idx = max_element(iv.begin(),iv.end()) - iv.begin();
		iv[max_idx]--;
		me++;
		count++; 
	}
	cout<<count;
	
	return 0;
}
