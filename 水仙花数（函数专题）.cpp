#include<iostream>
#include<cmath>
using namespace std;
int narcissus(int n);

int main()
{
	int m,n;
	while(cin>>m>>n){
		int x=0,a=1;
	for(int i=m;i<=n;i++){
		if(narcissus(i)==1&&a==1){
			cout<<i;
			a=0;
			x=1;
		}
		else if(narcissus(i)==1&&a==0){
			cout<<" "<<i;
			x=1;
		}
	}
	
	if(x==0){
		cout<<"no";
	}
	cout<<endl;
}
	return 0;
}
int narcissus(int n){
	int a[100],i=1,sum=0,m;
	m=n;
	while(n>0){
		a[i]=n%10;
		n/=10;
		i++;
	}
	for(int j=1;j<i;j++){
		sum+=pow(a[j],3);
	}
	if(sum==m){
		return 1;
	}
	else{
		return 0;
	}
}
