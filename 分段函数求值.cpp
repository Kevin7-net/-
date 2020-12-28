#include<iostream>
using namespace std;

int main()
{
	int x,y;
	cin>>x;
	if(x<-2){
		y=-2*x+7;
	}
	else if(x>=-2&&x<3){
		int m=3*x+2;
		if(m>=0){
			y=5-m;
		}
		else{
			y=5+m;
		}
	}
	else if(x>=3){
		y=3*x+4;
	} 
	cout<<y;
	return 0;
}
