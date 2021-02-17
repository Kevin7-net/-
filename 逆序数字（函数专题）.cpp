#include<iostream>
using namespace std;
int inverse(int n);

int main()
{
	int n,sum=0;
	cin>>n;
	int N=inverse(n);
	sum=n+N;
	cout<<sum;
	return 0;
}
int inverse(int n){
	int t=0;
	while(n>0){
		int d=n%10;
		t=t*10+d;
		n/=10;
	}
	return t;
}
