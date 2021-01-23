#include<iostream>
using namespace std;

int main()
{
	int n,m,y,a,b;
	cin>>m>>n;
	a=m;
	b=n;
	for(;b%a>0;)
	{
		y=a%b;
		a=b;
		b=y;
	 
	}
	cout<<a<<" "<<m/a*n;
	return 0;
} 

