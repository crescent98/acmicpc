#include <iostream>
#include <cmath> 
#include <cfloat>
using namespace std;

int CompareDoubleAbsoulte(double x, double y, double absTolerance);
int main(){
	int x1,y1,x2,y2,x3,y3;
	double absTolerance= (1.0e-8);
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	
	long double a1,a2,a3;
	
	a1=sqrt(pow(x2-x3,2)+pow(y2-y3,2));
	a2=sqrt(pow(x1-x3,2)+pow(y1-y3,2));
	a3=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
	
	long double l1,l2,l3;
	l3=a2+a3-a1;
	l2=a1+a3-a2;
	l1=a2+a3-a1;
	
	// exception1: no triangle
	if(a1==0||a2==0||a3==0) {
		cout<<-1;
		return 0;
	}
	
	// exception2: one line
	/*
		if(fabsf((y2-y1)/(x2-x1)-(y3-y1)/(x3-x1))
	<=FLT_EPSILON){
		cout<<-1;
		return 0;
	}
	*/
	long double m1=(y2-y1)/(x2-x1);
	long double m2=(y3-y1)/(x3-x1);
	
	if(0==CompareDoubleAbsoulte(m1,m2,absTolerance)){
		cout<<-1;
		return 0;
	}

	
	// 최대 최소 구하기  
	long double max,min;
	// max
	max=l1;
	if(max<l2){
		max=l2;
	}
	if(max<l3){
		max=l3;
	}
	 
	//min
	min=11;
	if(min>l2){
		min=2;
	}
	if(min>l3){
		min=l3;
	}
	cout.setf(ios::fixed);
	cout.precision(11);	
	cout<<max-min;	
}


int CompareDoubleAbsoulte(double x, double y, double absTolerance)
{
    double diff = x - y;
    if (fabs(diff) <= absTolerance)
        return 0;

    return (diff > 0) ? 1 : -1;
}
