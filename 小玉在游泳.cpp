#include<iostream>
using namespace std;

int main()
{
	int m=1;
	double n,sum=2,x=2;
	cin>>n;
	while(sum<n){
		x=0.98*x;  //ÿһ���Ĵ�С 
		sum+=x;
		m++;
	}
	cout<<m;
	return 0;
 } 
