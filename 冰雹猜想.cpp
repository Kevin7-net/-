#include<iostream>
using namespace std;

int main()
{
	int a[1000],x=0;
	long long n;
	int i=0;
	cin>>n;
	a[i]=n;
	i++;
	while(n!=1){
		if(n%2==1){
			n=3*n+1;
		}
		else{
			n/=2;
		}
		a[i]=n;
		i++;
	}
	for(int j=i-1;j>=0;j--){
		cout<<a[j]<<" ";
	}
	return 0;
 } 
