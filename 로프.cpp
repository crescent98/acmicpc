#include <iostream>
#include <algorithm>
#include <vector> 

using namespace std;

int main(){
	int N;
	cin>>N;
	
	int temp=0;
	vector<int> iv;
	for(int i=0;i<N;i++){
		cin>>temp;
		iv.push_back(temp);
	}
	
	sort(iv.begin(),iv.end());
	//reverse(iv.begin(),iv.end());
	
	int max=0;
	int temp2=0;
	for(int i=0;i<N;i++){
		temp2=(N-i)*iv[i];
		if(temp2>max){
			max=temp2;
		}
	}
	
	cout<<max;
	return 0;
}
