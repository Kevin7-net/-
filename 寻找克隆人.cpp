#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	string s[n];
	int a[n],ss[n+1];
	memset(a,0,sizeof(a));
	memset(ss,0,sizeof(ss));
	for(int i=0;i<n;i++)
	{
		cin>>s[i];
		for(int j=0;j<i;j++)
		{
			if(s[i]==s[j])
			{
				a[j]++;
				a[i]=-1;
				break;
			}
		} 
		if(a[i]!=-1)a[i]++;
	}
	for(int i=1;i<=n;i++)
	{
		//if(a[i]==-1)continue;
		for(int j=0;j<n;j++)
		{
			if(a[j]==-1)continue;
			if(a[j]==i)
			{
				ss[i]++;
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		printf("%d\n",ss[i]);
	}
	return 0;
}
