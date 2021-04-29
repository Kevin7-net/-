#include<iostream>
#include<cmath>
using namespace std;
int prime(int a);

int main()
{
	int n;
	cin>>n;
	for(int i=2;i<=n;i++){
		if(prime(i)){
			for(int j=i;j<=n;j++){
				if(i+j==n&&prime(j)==1){
					cout<<i<<" "<<j<<endl;
				}
			}
		} 
	}
	return 0;
}

int prime(int a){
	for(int i=2;i<=sqrt(a);i++){//ÖØµãi<=sqrt(a)
		if(a%i==0){
		return 0;
		}
	}
	return 1;
	
}
