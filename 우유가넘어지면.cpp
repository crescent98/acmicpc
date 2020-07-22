#include <iostream>
#define max 100

using namespace std;
int fall(char *a);
int main(){
	int N, M;
	cin>>N>>M;
	char map[max][max];
	char temp;
	for(int i=0;i<N;i++){
		for(int j=0;j<M;j++){
			cin>>temp;	
			fall(&temp);
			map[i][j]=temp;
		}
	}
	
	for(int i=M-1;i!=-1;i--){
		for(int j=0;j<N;j++){
			cout<<map[j][i];
		}
		cout<<"\n" ;
	}
	
	return 0;
}

int fall(char *a){
	// 하이픈과 세로바 
	if(*a==45){
		*a=124;
		return 0;
	}
	else if(*a==124){
		*a=45;
		return 0;
	}
	// 슬래시와 역슬래시 
	else if(*a==47){
		*a=92;
		return 0;
	}
	else if(*a==92){
		*a=47;
		return 0;
	}
	// 캐럿 왼쪽 부등호 소문자 오른쪽 부등호  
	else if(*a==94){
		*a=60;
		return 0;
	}
	else if(*a==60){
		*a=118;
		return 0;
	}
	else if(*a==118){
		*a=62;
		return 0;
	}
	else if(*a==62){
		*a=94;
		return 0;
	}
}
