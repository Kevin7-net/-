#include<iostream>
using namespace std;

int main()
{
	double a[15];
	double b[15];
	a[1]=1,a[2]=1;
	for(int i=3;i<=14;i++){
		a[i]=a[i-1]+a[i-2];
	}

	for(int i=1;i<=13;i++){
		b[i]=1/(a[i]*a[i+1]);
	} 
		for(int i=1;i<=14;i++){
		cout<<b[i]<<" ";
	}
	return 0;
}
