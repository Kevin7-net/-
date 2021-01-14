#include<iostream>
using namespace std;

int main()
{
	int n,a,b=1;
	cin>>n;
	a=n;
	while(a>9){
		a/=10;
		b*=10;
	}
	while(b>0){
		cout<<n/b<<" ";
		n%=b;
		b/=10;
	}
	return 0;
 } 
