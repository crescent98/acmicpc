#include <iostream>

using namespace std;
long long fact[30]={0};
long long comb[30][30]={0};
int combination(int n, int r);
int main(){
	cin.tie(NULL);
	cin.sync_with_stdio(false);
	
		
	int t;
	cin>>t;
	int n,m;
	fact[0]=1;
	for(int i=0;i<t;i++){
	cin>>n>>m;
	comb[0][0]=1;
	for(int i=0;i<=m;i++){
		for(int j=0;j<=n;j++){
			if(comb[i][j]!=0) continue;
			if(i==j||j==0){
				comb[i][j]=1;
				continue;
			}
			comb[i][j]=comb[i-1][j]+comb[i-1][j-1];
		}
	}	
	cout<<comb[m][n]<<"\n";
	}

	return 0;
}

