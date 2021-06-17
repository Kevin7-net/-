#include<iostream>
using namespace std;

int main()
{
	int n,a,b;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>b;
		int sum1=0,sum2=0;
		for(int j=1;j<a;j++){
			if(a%j==0){
				sum1+=j;
			}				
		}
		if(sum1==b){
		for(int k=1;k<b;k++){
			if(b%k==0){
				sum2+=k;
			}			
		}
		if(sum2==a)
		cout<<"YES"<<endl;
		}
		else
		cout<<"NO"<<endl;
	}
	return 0;
}
