#include<iostream>
using namespace std;

int main()
{
	int n,x=0;
	cin>>n;
	if(n==1){
		cout<<"No"<<endl;
	}
	for(int i=2;i<n;i++){
		while(n%i==0&&x==0){
			cout<<"No"<<endl;
			x=1;			
		}
	}
	if(x==0&&n!=1){
		cout<<"Yes"<<endl;
	}
	return 0;
 } 
