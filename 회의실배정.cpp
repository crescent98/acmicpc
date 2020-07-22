#include <iostream>
#include <list>
using namespace std;

int main(){
	int count=0;
	cin>>count;
	
	list<int> start;
	list<int> end;
	
	int temp1;
	int temp2;
	
	// 각각 start list 와 end list 에 넣었다. 
	for (int i=0;i<count;i++){
		cin>>temp1;
		cin>>temp2;
		start.push_back(temp1);
		end.push_back(temp2);
	}
	
	// end List 최소 구하기
	int m=0;
	//cout<<start.get_allocator(2);
	
	int a[100000];
	return 0;
}

bool duple(int end1, int start2){
	if (end1>start2){
		return true;
	}
	return false;
}
