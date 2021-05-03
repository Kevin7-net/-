#include<iostream>
using namespace std;

int prime(int a)
{
	if(a<=1)
	return 0;
	for(int i=2;i<a;i++){
		if(a%i==0){
			return 0;
		}
	}
	return 1;
}
int main()
{
	int sum=0;
	int m=1900,n=2020;
	for(int i=m;i<=n;i++){
		if(prime(i)){
			sum++;
			cout<<i<<" ";
		}
	}
	cout<<sum;
	return 0;
 } 
