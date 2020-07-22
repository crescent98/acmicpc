#include <iostream>
#include <list>
using namespace std;
bool isAvail(int end1,int start2);
int main(){
	int count;
	cin>>count;
	
	int start[100000];
	int end[100000];
	bool avail[100000];
	int count2=0;
	
	int temp1;
	int temp2;

	// 값 설정	
	for (int i=0;i<count;i++){
	cin>>temp1;
	cin>>temp2;
	start[i]=temp1;
	end[i]=temp2;
	avail[i] =true;
	}
	int min;
	// min 배열 구하기
	while(1){
		bool fin=true;
		for(int i=0;i<count;i++){
			if(avail[i]==true){
			min=i;
			fin=false;
			}
		}
		if(fin==true) break;
		
		// min 찾기 
		for(int i=0;i<count;i++){
	 	if (avail[i]==true){
	 		if(end[i]<end[min]){
	 			min=i;
			 }
		 }
		}

		// 정리하기  
		//	cout<<"min is"<<min<<" min end is"<<end[min]<<"\n";
			count2++;
			avail[min]=false;
			for(int j=0;j<count;j++){
				if(avail[j]==true){
					if(isAvail(end[min],start[j])==false){
						avail[j]=false;
					//	cout<<"new false is  "<<j<<"\n";
					}
				}
			}
		
	}
	
	cout<<count2;
}

bool isAvail(int end1,int start2){
	if (start2<end1){
		return false;
	}
	return true;
}
