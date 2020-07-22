#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	cin.tie(NULL);
	cin.sync_with_stdio(false);
	
	int T;
	cin>>T;
	
	int a[2];
	int min;
	int min_idx;
	int temp1,temp2;
	
	for(int i=0;i<T;i++){
		cin>>a[0]>>a[1];
		min=*min_element(a,a+1);
		min_idx = min_element(a,a+1) - a;
		while(a[0]%min!=0||a[1]%min!=0){
			min--;
		}
		// min 은 이제 최소 공배수
		temp1=a[0]/min;
		temp2=a[1]/min;
		cout<<temp1*temp2*min<<"\n";
	}
	return 0;
}
