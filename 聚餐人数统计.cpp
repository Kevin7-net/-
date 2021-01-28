#include<iostream>
using namespace std;

int main()
{
	int n,cost,m=0;
	cin>>n>>cost;
	for(int i=0;i<=cost/3;i++)
		for(int j=0;j<=cost/2;j++){
			int k=n-i-j;
			if(3*i+2*j+k==cost){
				cout<<i<<" "<<j<<" "<<k<<endl;
				m=1;
			}
		}
		if(m==0){
			cout<<"No answer";
		} 
		return 0;
 } 
