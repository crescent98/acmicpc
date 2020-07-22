#include <iostream>

using namespace std;

int main(){
	int N;
	cin>>N;
	
	int temp=N;
	int temp2;
	int count=1;

	temp2=temp/10+temp%10;
	temp=(temp%10)*10+temp2%10;
	
	while(temp!=N){
		temp2=temp/10+temp%10;
		temp=(temp%10)*10+temp2%10;
		count++;
	}
	cout<<count;
	return 0;
}
