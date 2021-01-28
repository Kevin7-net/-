#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int n,m=0,k=0;
	cin>>n;
	for(int i=0;i<=n/5;i++)
		for(int j=0;j<=n/3;j++){
			k=n-i-j;
			if(i+j+k==n&&15*i+9*j+k==3*n){
				cout<<setw(4)<<i<<setw(4)<<j<<setw(4)<<k<<endl;
				m=1;
			}
		}
	if(m==0)
	cout<<"No Answer";		
	return 0;
 } 
