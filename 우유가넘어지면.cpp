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
	// �����°� ���ι� 
	if(*a==45){
		*a=124;
		return 0;
	}
	else if(*a==124){
		*a=45;
		return 0;
	}
	// �����ÿ� �������� 
	else if(*a==47){
		*a=92;
		return 0;
	}
	else if(*a==92){
		*a=47;
		return 0;
	}
	// ĳ�� ���� �ε�ȣ �ҹ��� ������ �ε�ȣ  
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
