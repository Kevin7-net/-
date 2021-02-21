#include<iostream>
using namespace std;
int digitSum(int n);

int digitSum(int n)
{
	int d,sum=0;
	while(n>0){
		d=n%10;
		sum+=d;
		n/=10;
	}
	return sum;
}
int main()
{
	int n,m;
	cin>>n;
	m=digitSum(n);
	while(m>10){ 
	m=digitSum(m);
	} 
	cout<<m;
	return 0;
}
