#include <iostream>
#include <vector>
using namespace std;
#define e 2.718281828

int main(){
	
	vector <int> line;
	vector <int> exp;
	vector <int> part;
	
	int n;
	cin>>n;
	
	char cTemp;
	int iTemp;
	for(int i=0;i<n;i++){
		cin>>cTemp>>iTemp;
		if(cTemp=='*'){
			line.push_back(iTemp);
		}
		else if(cTemp=='/'){
			part.push_back(iTemp);
		}
		else if(cTemp=='^'){
			exp.push_back(iTemp);
		}
	}
	
	int count=0;
	
	// 1. 직선끼리 
	if(line.size()>1) count++;
	
	// 2. 지수끼리  
	if(exp.size()>1) count++;
	
	// 3. 직선과 지수끼리 
	vector<int>::iterator ptr1;
	vector<int>::iterator ptr2;
	int temp1,temp2;
	
	for(ptr1=line.begin();ptr1!=line.end();ptr1++){ // 직선 
		for(ptr2=exp.begin();ptr2!=exp.end();ptr2++){ // 지수 
			temp1=*ptr1;
			temp2=*ptr2;
			// 지수가 직선인 경우 -> 무조건 1개
			if(temp2==0) {
				count++;
				continue;
			}
			
			if(temp1*temp2<0) count++;
			
			else{
				if (e*temp1<temp2) count++;
			}
		}
	}
	
	// 4. 직선과 분수끼리 

	for(ptr1=line.begin();ptr1!=line.end();ptr1++){
		for(ptr2=part.begin();ptr2!=part.end();ptr2++){
			temp1=*ptr1;
			temp2=*ptr2;
			if(temp1*temp2>0) count++;
		}
	}
	
	// 5. 지수와 분 수  
	
	/*
		int temp1,temp2;
	for(ptr1=exp.begin();ptr1!=exp.end();ptr1++){
		for(ptr2=part.begin();ptr2!=part.end();ptr2++){
			count++;
		}
	}
	*/

	count=count+exp.size()*part.size();
	
	cout<<count;
	
	return 0;
}
