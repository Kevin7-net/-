#include<iostream>
using namespace std;

int main()
{
	int n,x;
	cin>>n;
	int sum=1;
	for(int i=0;i<n;i++){
		cin>>x;
		if(x%2==1){
			sum*=x;
		}
	}
	cout<<sum;
	return 0;
 } 
