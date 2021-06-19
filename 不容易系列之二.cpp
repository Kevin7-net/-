#include<iostream>
using namespace std;

int main()
{
	int a[32];
	a[0]=3;
	for(int i=0;i<30;i++){
		a[i+1]=(a[i]-1)*2;
	}
	int n,m;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>m;
		cout<<a[m]<<endl;
	}
	return 0;
 } 
