#include<bits/stdc++.h>
using namespace std;

int main()
{
	double s,v,m;
	int n,t,a,b;
	n=8*60+24*60;
	cin>>s>>v;
	t=ceil(s/v)+10;
	n-=t;
	if(n>=24*60){
		n-=24*60;
	}
	a=n/60;
	b=n%60;
	if(a<10)//�����ж��Ƿ�0
	{
		if(b<10) cout<<"0"<<a<<":0"<<b;
		else cout<<"0"<<a<<":"<<b;
	}
	else
	{
		if(b<10) cout<<a<<":0"<<b;
		else cout<<a<<":"<<b;
	}
	return 0;
 } 
