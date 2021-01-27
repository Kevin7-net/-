#include<iostream>
using namespace std;

int main()
{
	int high,up,down,x=0,day=0;
	cin>>high>>up>>down;
	while(x<high){
	x=x+up;
	if(x<high){
		x-=down;
		day++;
	}
	else{
		cout<<day+1;
	}
	}
	return 0;
}
