#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int N;
	cin>>N;
	vector<int> iv;
	int temp=0;
	
	for (int i=0;i<N;i++){
		cin>>temp;
		iv.push_back(temp);
	}
	sort(iv.begin(),iv.end());
	
	int sum=0;
	for(int i=0;i<N;i++){
		sum=(N-i)*iv[i]+sum;
	}
	cout<<sum;
}
