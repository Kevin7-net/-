#include<iostream>
#include<algorithm>
using namespace std;

int cmp(int a,int b)
{
	return a>b;
}
int main()
{
	int a[1000000],b[1000000],c[1000000];
	int m,n;
	cin>>m;
	for(int i=0;i<m;i++){
		cin>>a[i];
	}
	cin>>n;
	for(int j=0;j<n;j++){
		cin>>b[j];
	}
	for(int i=0;i<m;i++){
		c[i]=a[i];
	}
	for(int j=m;j<n+m;j++){
		c[j]=b[j-m];
	}
	sort(c,c+m+n,cmp);
	for(int i=0;i<m+n;i++){
		cout<<c[i]<<" ";
	}
	return 0;
}
