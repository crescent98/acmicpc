#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main(){
	int N,L;
	cin>>N>>L;
	vector<int> iv;
	int temp1,temp2;
	int count1=0,count2=0;
	if(N%2==0){ // Â¦¼öÀÏ¶§ 
		temp1=N/2;
		// push back Average
		iv.push_back(temp1);
		
		// push back until we get it

		while(accumulate(iv.begin(),iv.end(),0)==N){
			iv.push_back(temp1-count2);
		  	iv.push_back(temp1+count2);
		  	count2++;
		}
		count1=count2*2+1;
	}
	
	else if(N%2!=0){ // È¦¼öÀÏ¶§ 
		temp1=N/2;
		temp2=N/2+1;
		iv.push_back(temp1);
		iv.push_back(temp2);
		
		while(accumulate(iv.begin(),iv.end(),0)==N){
			iv.push_back(temp1-count2);
			iv.push_back(temp2+count2);
			count2++;
		}
		count1=count2*2+2;
	}
	
	if(count1>100||count1>L){
		cout<<1;
		return 0;
	}
	
	else{
		sort(iv.begin(),iv.end());
		vector <int>::iterator ptr;
		for(ptr=iv.begin();ptr!=iv.end();ptr++){
			cout<<*ptr<<" ";
		}
	}
	
	
	return 0;
}
