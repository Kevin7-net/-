#include<iostream>
#include<cmath>
#include<iomanip>
#define PI 3.14159

using namespace std;

int main()
{
	double r,c,s;
	cin>>r;
	c=2*PI*r;
	s=PI*r*r;
	cout<<fixed<<setprecision(2)<<c<<" "<<s<<endl;
	return 0;
 } 
