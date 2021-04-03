#include<bits/stdc++.h>
using namespace std;

int main()
{	
	double n,m;
	cin>>n;
	m=(   pow ( (1+pow(5,0.5)) / 2 , n ) - pow (  (1-pow(5,0.5)) / 2 , n )  ) / pow(5,0.5);
	cout<<fixed<<setprecision(2)<<m;
	return 0;	
}
