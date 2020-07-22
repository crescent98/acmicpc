#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

int main(){
	cin.tie(NULL);
	cin.sync_with_stdio(false);
	char word[50][51];
	vector <char> cv;
	int N;
	cin>>N;
	
	for(int i=0;i<N;i++){
		cin>>word[i];
	}
	
	int count= strlen(word[0]);
	char temp;
	bool isSame=true;
	for(int i=0;i<count;i++){
		temp=word[0][i];
		isSame=true;
		
		for(int j=0;j<N;j++){
		if(temp!=word[j][i]) isSame=false;
		}
		
		if(isSame==true) cv.push_back(temp);
		else if(isSame==false) cv.push_back('?');
	}
	vector <char>::iterator ptr;
	for(ptr=cv.begin();ptr!=cv.end();ptr++) cout<<*ptr;
	
	return 0;
}
