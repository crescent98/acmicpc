#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

int main(){
	char board[501];
	cin>>board;
	
	vector <char> cv;
	
	int len=strlen(board);
	int temp_s=0;
	int count=0; 
	for(int i=0;i<len;i++){
		temp_s=i;
		count=0;
		
		// .까지 조사  
		while(board[i]!='.'){
			i++;
			count++;
			if(i==len) break; //문자열이 끝났을 경우  
		}
		
		// board[i]=='.' or end
		if(count%2!=0){
			cout<<-1;
			return 0;
		}
		
		else if(count==0) {
			if(board[i]=='.')	cv.push_back('.');
			continue;
		}
		
		else if(count%4==0){
			for(int j=0;j<count;j++){
				cv.push_back('A');
			}
		}
		
		else if(count%4==2){
			for(int j=0;j<count-2;j++){
				cv.push_back('A');
			}
			cv.push_back('B');
			cv.push_back('B');
		}
		
		if(len!=i) cv.push_back('.');
	}
	
	vector <char>::iterator ptr;
	for(ptr=cv.begin();ptr!=cv.end();ptr++){
		cout<<*ptr;
	}
}
