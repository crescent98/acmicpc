#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int s1,s2,s3;
	int total[100]={0};
	cin>>s1>>s2>>s3;
	
	for(int i=1;i<=s1;i++){
		for(int j=1;j<=s2;j++){
			for(int k=1;k<=s3;k++){
				total[i+j+k]++;
			}
		}
	}
	int max_idx=max_element(total,total+s1+s2+s3)-total;
	cout<<max_idx;
	return 0;
}
