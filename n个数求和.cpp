#include<iostream>
using namespace std;

int main()
{
	int n,sum=0,x;
	cin>>n;
	int i=n;

	for(int j=0;j<i;j++){
		cin>>x;
		sum+=x;
	}
	cout<<sum<<endl;
	return 0;
 } 
