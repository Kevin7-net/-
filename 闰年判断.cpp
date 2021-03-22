#include<iostream>
using namespace std;

int main()
{
	int n,m=0;
	cin>>n;
	if(n%4==0&&n%100!=0){
		m=1;
	}
	else if(n%400==0){
		m=1;
	}
	cout<<m;
	return 0;
}
