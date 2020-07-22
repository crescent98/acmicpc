#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int count;
	cin>>count;
	vector<int> iv;
	int temp;
	
	for(int i=0;i<count;i++){
		cin>>temp;
		iv.push_back(temp);
	}
	sort(iv.begin(),iv.end());
	cout<<iv[0]*iv[count-1];
	return 0;
}
