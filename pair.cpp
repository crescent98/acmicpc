#include <iostream>
#include <utility>

using namespace std;

int main(){
	pair <int,int> p;
	pair <char,double> q;
	
	int a=1,b=2;
	pair<int,int> r=make_pair(a,b);
	pair<int,int> t=make_pair(1,2);
	
	int valA=p.first;
	int valB=p.second;
	
	cout<<p.first;
}
