#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int a[1005],b[1005],c[1005];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		c[i]=a[i];
	}
	for(int i=2;i<=n-3;i++){
		sort(a+i-2,a+i+3);
		b[i-2]=a[i+2]-a[i-2]; 
		for(int j=i-2;j<=i+2;j++){
			a[j]=c[j];
		}
	}
	for(int i=0;i<n-4;i++){
			cout<<b[i]<<" ";
		}
	return 0;
 } 
