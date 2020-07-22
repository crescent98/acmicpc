#include <iostream>
using namespace std;

int main(){
	int N;
	cin>>N;
	
	int count[11]={0};
	if(N==0){
		cout<<1;
		return 0;
	}
	while(N!=0){
		count[N%10]++;
		N=N/10;
	}
	
	if((count[6]+count[9])%2==1){
		count[10]= (count[6]+count[9])/2+1;
	}
	else{
		count[10]= (count[6]+count[9])/2;
	}
	count[6]=0;
	count[9]=0;
	
	int max=0;
	for(int i=0;i<11;i++){
		if(count[i]>max) max=count[i];
	}
	cout<<max;
	
	return 0;
}
