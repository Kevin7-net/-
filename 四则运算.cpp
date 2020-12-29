#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
	double a,b;
	char c;
	cin>>a>>c>>b;
	if(c=='/'&&fabs(b)<1e-10){
		cout<<"Wrong input!";
	}
	else{
	switch(c){
		case('+'):cout<<fixed<<setprecision(2)<<a+b;break;
		case('-'):cout<<fixed<<setprecision(2)<<a-b;break;
		case('*'):cout<<fixed<<setprecision(2)<<a*b;break;
		case('/'):cout<<fixed<<setprecision(2)<<a/b;break;
		default:cout<<"Wrong input!";
	}
}
	return 0;
}
