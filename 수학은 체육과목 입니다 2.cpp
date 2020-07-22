#include <iostream>

using namespace std;

int main(){
	int N;
	cin>>N;
	
	int r=N%8;
	
	if(r==1) cout<<1;
	else if(r==2||r==0) cout<<2;
	else if(r==3||r==7) cout<<3;
	else if(r==4||r==6) cout<<4;
	else cout<<5;
	return 0;
}
