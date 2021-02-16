#include<iostream>
using namespace std;

int main()
{
	int n,sum=0;
	while(cin>>n){
		sum=0;
		while(n!=1){ 
		if(n%2==0){
			n/=2;
			sum++;
		}
		else{
			n=3*n+1;
			sum++;
		}
		} 
		cout<<sum<<endl;
	}
	return 0;
}
