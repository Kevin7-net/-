#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	double m;
	cin>>m;
	if(m<=10000){
		m=m*0.05+1500;
	}
	else if(m<=50000&&m>10000){
		m=10000*0.05+(m-10000)*0.03+1500;
	}
	else if(m>50000){
		m=10000*0.05+40000*0.03+(m-50000)*0.02+1500;
	}
	cout<<fixed<<setprecision(2)<<m; 
	return 0;
}
