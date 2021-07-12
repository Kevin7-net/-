#include<iostream>
using namespace std;

int ss(int a)
{
	if(a<2){
		return 0; 
	}
	if(a==2){
		return 1;
	}
	for(int i=2;i<a;i++){
		if(a%i==0){
			return 0;
		}
	}
	return 1;
}
int main()
{
	int m,n,sum=0;
	cin>>m>>n;
	for(int i=m;i<=n;i++){
		if(ss(i)){
			sum++;
		}
	}
	cout<<sum;
	return 0;
}
