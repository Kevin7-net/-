#include<iostream>
#include<cmath>
#include<iomanip>
#define PI 3.14159

using namespace std;

int main()
{
	double r,h,s;
	cin>>r>>h;
	s=2*PI*r*h+2*PI*r*r;;
	cout<<fixed<<setprecision(2)<<s<<endl;
	return 0;
 } 
