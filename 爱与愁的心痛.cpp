//数组从第一位开始连续m个数的最小值为多少 
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int m,n,a[3000],sum=0,b[3000],x=0;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n-m+1;i++,x++){
		for(int j=i;j<i+m;j++){
			b[x]+=a[j];
		}
	}
	sort(b,b+x-1);
	cout<<b[0];
	return 0;	
}
