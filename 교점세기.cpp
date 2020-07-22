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
	
	// 1. �������� 
	if(line.size()>1) count++;
	
	// 2. ��������  
	if(exp.size()>1) count++;
	
	// 3. ������ �������� 
	vector<int>::iterator ptr1;
	vector<int>::iterator ptr2;
	int temp1,temp2;
	
	for(ptr1=line.begin();ptr1!=line.end();ptr1++){ // ���� 
		for(ptr2=exp.begin();ptr2!=exp.end();ptr2++){ // ���� 
			temp1=*ptr1;
			temp2=*ptr2;
			// ������ ������ ��� -> ������ 1��
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
	
	// 4. ������ �м����� 

	for(ptr1=line.begin();ptr1!=line.end();ptr1++){
		for(ptr2=part.begin();ptr2!=part.end();ptr2++){
			temp1=*ptr1;
			temp2=*ptr2;
			if(temp1*temp2>0) count++;
		}
	}
	
	// 5. ������ �� ��  
	
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
