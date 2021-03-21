#include<iostream>
using namespace std;

int main()
{
	int m,t,s,x,y;
	cin>>m>>t>>s;
	if(t==0){
		cout<<"0";
	}
	else{
	x=s/t;
	y=s%t;
	if(y!=0){
		if(m-x-1>0){
			cout<<m-x-1;
		}
		else{
			cout<<"0";
		}
	}
	else{
		if(m-x>0){
			cout<<m-x;
		}
		else{
			cout<<"0";
		}
	}
}
	return 0;
}
