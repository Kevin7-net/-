#include<iostream>
using namespace std;

int main()
{
	int n,i,j,k;
	cin>>n;
	i=n%10;
	j=n/10%10;
	k=n/100;
	if(k*k*k+j*j*j+i*i*i==n){
		cout<<"yes";
	}
	else{
		cout<<"no";
	}
	return 0;
}
