#include<iostream>
using namespace std;

int tsum(int a);
int main()
{
	int a;
	int d,m;
	int sum=0;
	cin>>a;
	do{
	m=3*tsum(a)+1;
	cout<<m<<endl;
	a=m;
	}while(m!=13);
	
	return 0;
}
int tsum(int a){
	int sum;
	while(a>0){
		int d=a%10;
		sum+=d;
		a/=10; 
	}
	return sum;
}
