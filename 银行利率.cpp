#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
	double d,n,s;
	cin>>n>>d;
	s=d*pow(1+0.0225,n);
	cout<<fixed<<setprecision(6)<<s<<endl;
	return 0;
 } 
