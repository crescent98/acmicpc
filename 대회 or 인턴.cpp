#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n,m,k;
	cin>>n>>m>>k;
	int team_count=0; 
	int sx;
	int left;
	// (k�� ��������) �ִ� �� ���� ���ϱ�
	
	// ��� ��
	if(n>2*m){
		team_count=m;
		left=n-2*m;
	}
	else if(n<2*m){
		team_count=n/2;
		left=m-n/2+n%2;
	}
	else{
		team_count=m;
		left=0;
	}
	
	// k ��ŭ ���� 
	for(int i=0;i<k;i++){
		if(left==0){
			team_count--;
			left=2; // 3->2
		}
		else{
			left--;
		}
	}
	cout<<team_count;
	return 0;
	
}
