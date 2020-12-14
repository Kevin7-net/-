#include<iostream>
using namespace std;

int main()
{
	int n,a,b,c;
	cin>>n;
	if(n>99&&n<1000){
		a=n%10;
		b=n/10%10;
		c=n/100;
		cout<<a<<" "<<b<<" "<<c<<endl;
	}
	return 0;
}
