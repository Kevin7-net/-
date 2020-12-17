#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
	double a1,a2,b1,b2,i,j,k,x;
	cin>>a1>>a2>>b1>>b2;
	i=pow((b1-a1),2);
	j=pow((b2-a2),2);
	k=i+j;
	x=pow(k,0.5);
	cout<<fixed<<setprecision(2)<<x<<endl;
	return 0;
}
