#include<iostream>
using namespace std;
int inverse(int n);

int inverse(int n)
{
	int t=0,d=0;
	while(n>0){
		d=n%10;
		t=t*10+d;
		n/=10;
	}
	return t;
}
int main()
{
	int n,m;
	cin>>n;
	while(m=inverse(n),m!=n)
	{
	// 输出n;
	// n更新为 m + n;
		cout<<n<<" ";
		n+=m;
	}
	cout<<n;
	return 0;
}
