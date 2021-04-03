#include<iostream>
using namespace std;

int main()
{
	int m=1;
	double n,sum=2,x=2;
	cin>>n;
	while(sum<n){
		x=0.98*x;  //每一步的大小 
		sum+=x;
		m++;
	}
	cout<<m;
	return 0;
 } 
