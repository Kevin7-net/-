#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	double t,p;
	int n;
	cin>>t>>n;
	p=t/n;
	cout<<fixed<<setprecision(3)<<p<<endl;
	cout<<2*n;
	return 0;
}
