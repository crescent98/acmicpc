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
	// sorting -> 0�� �ڵ����� �ڷ� ��  
	sort(iv.begin(),iv.end());
	reverse(iv.begin(),iv.end());
	
	// 3�� ������� check
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
���ؿ��� �� �ȵǴ��� �����غ���
���ڿ��� �޾Ҿ�� �߳�?
������ �߸��Ƴ�?
 
*/
