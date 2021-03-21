//对于一个 nn 个顶点的凸多边形，它的任何三条对角线都不会交于一点。请求出图形中对角线交点的个数。
//例如，66 边形：

#include<iostream>
using namespace std;

int main()
{
	unsigned long long n,ans;
	cin>>n;
	ans=n*(n-1)/2*(n-2)/3*(n-3)/4;
	cout<<ans;
	return 0;
}
