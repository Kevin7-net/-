#include<iostream>
using namespace std;
int reverse(int n);

int reverse(int n)
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
	int m,n,t;
	cin>>m>>n;
	for(int i=m;i<=n;i++){
		t=reverse(i);
		if(t==i){
			cout<<i<<" ";
		}
	}
	return 0;
}
