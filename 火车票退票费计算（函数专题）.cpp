#include<iostream>
#include<iomanip>
using namespace std;
double CancelFee(double price);

int main()
{
	double p,P;
	cin>>p;
	P=CancelFee(p);
	cout<<fixed<<setprecision(1)<<P;
}
double CancelFee(double price){
	double c,d;
	c=price*0.05;
	d=c-(int)c;
	if(d<0.25){
		c=c-d;
	}
	else if(d<0.75&&d>=0.25){
		c=c-d+0.5;
	}
	else{
		c=c-d+1.0;
	}
	return c;
}
