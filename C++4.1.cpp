#include<iostream>
#include<cmath>
#include<iomanip>
#define PI acos(-1)

using namespace std;

int main()
{
	double r,s,area;
	cout<<"Enter the length from the center to a vertex: ";
	cin>>r;
	
	s=2*r*sin(PI/5);
	area=5*s*s/(4*tan(PI/5));
	cout<<"The area of the pentagon is "<<fixed<<setprecision(2)<<area;
	return 0;
}
