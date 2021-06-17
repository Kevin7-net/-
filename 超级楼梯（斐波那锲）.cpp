#include<iostream>
using namespace std;

int main()
{
	int a[42],m,n;
	a[1]=0,a[2]=1,a[3]=2;
	for(int i=4;i<42;i++){
		a[i]=a[i-1]+a[i-2];
	}
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>m;
		cout<<a[m]<<endl;
	}
	return 0;
 } 
