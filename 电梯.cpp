#include<iostream>
using namespace std;

int main()
{
	int n,a[100],sum=0,i=0;
	a[i]=0;
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]>a[i-1]){
			sum+=(a[i]-a[i-1])*6+5;
		}
		else if(a[i]<a[i-1]){
			sum+=(a[i-1]-a[i])*4+5;
		}
		else{
			sum+=5;
		}
	}
	cout<<sum;
}
