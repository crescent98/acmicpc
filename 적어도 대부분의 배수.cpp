#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int index_case[10][3]={{0,1,2},{0,1,3},{0,1,4},
	{0,2,3},{0,2,4},{0,3,4},
	{1,2,3},{1,2,4},{1,3,4},{2,3,4}};
	
	int a[5];
	vector<int> lcm;
	
	cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4];
	int temp[3];
	int min1,min2;
	int lcm1,lcm2;
	for(int i=0;i<10;i++){
		temp[0]=a[index_case[i][0]];
		temp[1]=a[index_case[i][1]];
		temp[2]=a[index_case[i][2]];
		
		// index[0] 과 index[1] 최소 공배수 
		min1=*min_element(temp,temp+1);
		// 최대 공약수로 나누기  
		while(temp[0]%min1!=0||temp[1]%min1!=0){
			min1--;
		}
		lcm1=(temp[0]/min1)*(temp[1]/min1)*min1;
		
		// lcm1 과 index[2] 의 최소 공배수 
		min2=lcm1;
		if(temp[2]<lcm1) min2=temp[2];
		// 최대 공약수로 나누기
		while(lcm1%min2!=0||temp[2]%min2!=0) min2--;
		lcm2=lcm1*temp[2]/min2; 
		
		lcm.push_back(lcm2);
	}
	sort(lcm.begin(),lcm.end());
	cout<<lcm[0];
	
	return 0;
}
