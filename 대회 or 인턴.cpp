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
	// (k를 생각안한) 최대 팀 개수 구하기
	
	// 대소 비교
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
	
	// k 만큼 빼기 
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
