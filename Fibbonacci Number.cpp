#include<iostream>
using namespace std;

int main()
{
	int n;
	long long a[56];
	a[0]=0;
	a[1]=1;
	for(int i=2;i<=50;i++){
		a[i]=a[i-1]+a[i-2];
	}
	while(cin>>n,n!=-1){
		cout<<a[n]<<endl;
	}
	return 0;
 } 
