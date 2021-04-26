#include<iostream>
#include<cmath>
using namespace std;

int prime(int a)
{
	if(a<=1){
		return 0;
	}
	for(int i=2;i<=sqrt(a);i++){
		if(a%i==0){
			return 0;
		}
	}
	return 1;
}
int main()
{
	int n;
	int a[100000];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		if(prime(a[i])) {
			cout<<a[i]<<" ";
		}
	} 
	return 0;
}
