#include<iostream>
using namespace std;

int main()
{
	long long n;
	int sum=1;
	cin>>n;
	while(n!=1){ 
		n/=2;
		sum++;
	}
	cout<<sum;
	return 0;
}
