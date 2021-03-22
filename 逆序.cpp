#include<iostream>
#include<iomanip>
using namespace std;

void inverse(int n)
{
	int i=0;
	if(n==0)
	return;
	cin>>i;				//***** 
	inverse(--n);		//*****
	cout<<setw(4)<<i;
}

int main()
{
	int n;
	cin>>n;
	inverse(n);
}
