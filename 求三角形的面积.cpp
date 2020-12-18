#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
	double a,b,c,p,s;
	cin>>a>>b>>c;
	p=(a+b+c)/2;
	s=pow(p*(p-a)*(p-b)*(p-c),0.5);
	cout<<fixed<<setprecision(2)<<s<<endl;
	return 0;
}
