#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std; 
int main(){
	long long N,L;
	cin>>N>>L;
	
	float aver;
	int count1,count2; 
	vector <long long> iv;
	vector <long long> nv;
	for(int count=L;count<=100;count++){
		iv=nv;
		
		aver=static_cast<double>(N) / static_cast<double>(count);
		cout<<aver;
		if(fmod(aver*2,1) !=0) {
			continue; 
		}//pass 조건 
		
		
		else{
			if(fmod(aver,1)==0){ // aver가 하나로 이루어질 때 
			if(count%2==0) continue;
			// 앞뒤로 추가
			iv.push_back(aver);
			for(int i=1;i<=(count-1)/2;i++){
				iv.push_back(aver-i);
				iv.push_back(aver+i);
			} 
			}
			
			else if(fmod(aver,1)==0.5){
			// 
			if(count%2!=0) continue;
			iv.push_back(aver-0.5);
			iv.push_back(aver+0.5);
			for(int i=1;i<=(count-2)/2;i++){
				iv.push_back(aver-0.5-i);
				iv.push_back(aver+0.5+i);
			}
			} 
			
			else{
				continue;
			}
			break;
		}
	}
	sort(iv.begin(),iv.end());
	vector <long long>::iterator ptr;
	// check
	for(ptr=iv.begin();ptr!=iv.end();ptr++){
		if(*ptr<0){ //0 보다 작은 경 우  
			cout<<-1;
			return 0;
		}
		if(iv.size()>100){
			cout<<-1;
			return 0;
		}
	}
	
	// print out
	for(ptr=iv.begin();ptr!=iv.end();ptr++) cout<<*ptr<<" ";
}
