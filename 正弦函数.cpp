#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
double jc(double x);

int main()
{
	double x;
	double sum=0;
	cin>>x;
	for(double i=1;i<=10;i++){
		int j=i; 
		if(j%2==1){
			sum+=pow(x,2*i-1)/jc(2*i-1);
		}
		else{
			sum-=pow(x,2*i-1)/jc(2*i-1);
		}
	}
	cout<<fixed<<setprecision(3)<<sum;
	return 0;
 } 
 double jc(double x){
 	double sum=1;
 	for(double i=2;i<=x;i++){
 		sum*=i;
	 }
	 return sum;
 }
