#include <iostream> 
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main(){
	double s[201][201]={0};
	int N,K;
	cin>>N>>K;
	
	// base case -> s[1][n]=1
	for(int i=0;i<=N;i++) s[1][i]=1;
	
	// base case -> s[k][1]=k
	for(int i=1;i<=K;i++) s[i][1]=i;
	
	int sum=0;
	for(int i=2;i<=K;i++) {
		// 2nd floor(k=2)
		
		// problem -> exceed num while accumulating
		for(int j=0;j<=N;j++){
			sum=sum+s[i-1][j];
			sum=sum%1000000000;
		}
		
		//sum=int(accumulate(s[i-1],s[i-1]+N+1,0.0))%1000000000;

		for(int j=0;j<=N;j++){ // j<N -> >1
			//cout<<i<<" "<<j<<"mid accum is"<<sum<<"\n";
			s[i][N-j]=sum%1000000000;
			sum=sum-s[i-1][N-j];
		}
	}
	cout<<int(s[K][N]);
	return 0;
}
