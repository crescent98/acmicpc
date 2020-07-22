#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
	
	vector<int> iv;
	
	int N;
	cin>>N;
	int temp=N;
	long long sum=0;
	while(1){
		iv.push_back(temp%10);
		sum=sum+temp%10;
		temp=temp/10;
		if (temp==0) break;
	}
	// sorting -> 0은 자동으로 뒤로 감  
	sort(iv.begin(),iv.end());
	reverse(iv.begin(),iv.end());
	
	// 3의 배수인지 check
	if(sum%3!=0||iv.back()!=0){
		cout<<-1;
	}
	else{
		
		vector<int>::iterator ptr;
		for (ptr = iv.begin(); ptr != iv.end(); ++ptr) {
    		cout << *ptr;
			  	}
	}

	return 0;
	
	
}

/*
백준에서 왜 안되는지 생각해보기
문자열로 받았어야 했나?
조건이 잘못됐나?
 
*/
