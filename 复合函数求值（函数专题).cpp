#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
double funF(double x);
double funG(double x);

int main()
{
	double x;
	cin>>x;
	double X=funG(x);
	double Y=funF(X);
	cout<<fixed<<setprecision(2)<<Y;
	return 0;
 } 
double funF(double x){
	double X;
	X=abs(x-3)+abs(x+1);
	return X;
}
double funG(double x){
	double X;
	X=pow(x,2)-3*x;
	return X; 
}
