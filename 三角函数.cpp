#include<bits/stdc++.h>
using namespace std;

long long gcd(long long a,long long b){
	int c=1;
	while(c!=0){
	c=a%b; 
	a=b;
	b=c;
	}	
	return a;
}
int main()
{
	int a[100];
	int b=1;
	for(int i=0;i<3;i++){
		cin>>a[i];
	}
	sort(a,a+3);
//	for(int i=0;i<3;i++){
//		cout<<a[i]<<" ";
//	}
//	while(b!=0){
//		b=a[0]/a[2];
//		a[0]=a[2];
//		a[2]=b;
//	} 
//	gcd(a[0],a[2]);
	cout<<a[0]/gcd(a[0],a[2])<<"/"<<a[2]/gcd(a[0],a[2]);
	return 0;
}
