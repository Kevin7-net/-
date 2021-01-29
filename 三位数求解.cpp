#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int n,m=0;
	cin>>n;
	for(int i=1;i<=9;i++)
		for(int j=1;j<=9;j++)
			for(int k=0;k<=9;k++)
				if(100*i+10*j+k+100*j+10*k+k==n){
					cout<<setw(4)<<i<<setw(4)<<j<<setw(4)<<k<<endl;
					m=1;
				}
	if(m==0){
		cout<<"No Answer";
	}
	return 0;
}
