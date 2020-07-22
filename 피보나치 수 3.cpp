#include <iostream>
#include <vector>

using namespace std;

int main(){
	int n;
	cin>>n;
	
	vector <long long> lv;
	
	lv.push_back(1);
	lv.push_back(1);
	lv.push_back(2);
	for(int i=3;i<n;i++){
		lv.push_back((lv[1]+lv[2])%1000000);
		lv.erase(lv.begin());
	}
	if(n==1||n==2){
		cout<<1;
		return 0;
	}
	cout<<lv[2];
	return 0; 
}
