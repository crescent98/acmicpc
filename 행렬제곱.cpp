#include <iostream>
#include <vector>
using namespace std;

int main(){
		int v1[2][2]={{1,2},{3,4}};
		int *ptr1;
		ptr1=v1[0];
		
		int r[2][2];
		int n=2;
		int temp=0;


		int *ptr[2][2];
		
		
	for(int count=1;count<5;count++)	{
				for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			temp=0;
			for(int k=0;k<n;k++){
			temp=temp+v1[i][k]*v1[k][j];
			}
			r[i][j]=temp;
		}
	}
	for(int i=0;i<n;i++){
		for (int j=0;j<n;j++){
			cout<<r[i][j]<<"  ";
		}
		cout<<"\n";
	}
	}
	//cout<<typeid(v1);
	
	
	
	return 0;
}

