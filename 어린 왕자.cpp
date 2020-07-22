#include <iostream>
#include <vector>
#include <tuple>
#include <cmath>
using namespace std;

int main(){
	cin.tie(NULL);
	cin.sync_with_stdio(false);
	
	int x1,y1,x2,y2;
	int test_count;
	cin>>test_count;
	int planet_count;

	int temp1, temp2, temp3;
	int count=0;
	vector <tuple<int,int,int>>::iterator ptr;
	
	int x,y;
	int r;
	
	for(int i=0;i<test_count;i++){
		vector<tuple<int,int,int>> cv;
		count=0;
		cin>>x1>>y1>>x2>>y2;
		cin>>planet_count;
		
		for(int j=0;j<planet_count;j++){
			cin>>temp1>>temp2>>temp3;
			auto tuple_temp=make_tuple(temp1,temp2,temp3);
			cv.push_back(tuple<int,int,int> (tuple_temp));
		}
		
		for(ptr=cv.begin();ptr!=cv.end();ptr++){
			x=get<0>(*ptr);
			y=get<1>(*ptr);
			r=get<2>(*ptr);
			
			if(pow(x1-x,2)+pow(y1-y,2)<pow(r,2)&&pow(x2-x,2)+pow(y2-y,2)<pow(r,2)) continue;
			else{
				if(pow(x1-x,2)+pow(y1-y,2)<pow(r,2)) count++;
				if(pow(x2-x,2)+pow(y2-y,2)<pow(r,2)) count++;
			}

		}
		cout<<count<<"\n";
		
	}
	
	return 0;
}
