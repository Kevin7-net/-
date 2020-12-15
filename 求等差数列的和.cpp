#include<iostream>
using namespace std;

int main()
{
	int a,b,c,sum;
	int n=1;
	cin>>a>>b>>c;
	sum=a+b;
	while(a+n*c<b){
		sum+=a+n*c;
		n++;
	}
	cout<<sum;
	return 0;
 } 
