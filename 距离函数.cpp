#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

double dis(double a,double b,double c,double d)
{
	double sum;
	sum=pow(((a-c)*(a-c)+(b-d)*(b-d)),0.5);
	return sum;
}
int main()
{
	double x1,y1,x2,y2,x3,y3;
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	double sum=0;
	sum=dis(x1,y1,x2,y2)+dis(x1,y1,x3,y3)+dis(x2,y2,x3,y3);
	cout<<fixed<<setprecision(2)<<sum;
	return 0;
}
