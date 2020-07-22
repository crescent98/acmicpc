#include <iostream>
#include <cstdio>
using namespace std;
void query1(int a[], int s, int t, int x);
void query2(int a[],int s, int t, int k);

int main(){
	
	int N;
	long long k;
	scanf("%d %lld",&N,&k);
	long long a[250000];
	for (int i=0;i<N;i++){
		scanf("%lld",&(a[i]));
	}
	
	int M;
	scanf("%d",&M);
	
	int temp;
	int qcon[3];
	for(int i=0;i<M;i++){
		scanf("%d",&temp);
		if(temp==1){
			// l r x 입력  
			scanf("%d",&qcon[0]);
			scanf("%d",&qcon[1]);
			scanf("%d",&qcon[2]);
			
			query1(a,qcon[0],qcon[1],qcon[2]);
		}
		
		else if(temp==2){
			// l r 입력
			scanf("%d",&qcon[0]);
			scanf("%d",&qcon[1]);
			
			query2(a,qcon[0],qcon[1],k);
		}
	}
	
	return 0;	
}

void query1(int a[], int s, int t, int x){
	for(int i=s-1;i<t;i++){
		*(&a[i])=a[i]|x;
	}
}

void query2(int a[],int s, int t, int k){
	int count=0;
	for(int i=s-1;i<t;i++){
		if(a[i]==k){
			count++;
		}
	}
	printf("%d\n",count);
}

