#include<iostream>
using namespace std;

int main()
{
	int n,sum=1,sum1=1;
	cin>>n;
	for(int i=2;i<=n;i++){
		sum*=i;
		sum1+=sum; 
	}
	cout<<sum1<<endl;
	return 0;
 } 
