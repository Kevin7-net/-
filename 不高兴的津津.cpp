#include<iostream>
using namespace std;

int main()
{
	int a,b,c,m=0,max=0,day=0;
	for(int i=1;i<=7;i++){
		cin>>a>>b;
		c=a+b;
		if(c>max&&c>8){
		max=c;
		day=i;
		}
	}
	cout<<day;
	return 0;
 } 
