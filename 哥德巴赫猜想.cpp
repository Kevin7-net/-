#include<iostream>
using namespace std;

int prime(int n)
{
	if(n<=1){
		return 0;
	}
	for(int i=2;i<n;i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
} 
int main()
{
	int n;
	cin>>n;
	for(int i=4;i<=n;i+=2){
		for(int j=0;j<i;j++){
			if(prime(j)==1&&prime(i-j)==1){
				cout<<i<<"="<<j<<"+"<<i-j<<endl;
				break;
			}
		}
	}
	return 0;
}
