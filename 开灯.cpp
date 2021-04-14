#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	double a;
	int n,t,b[10000]={0};
	cin>>n;
	for(int i=0;i<n;i++){ 
	cin>>a>>t;
	for(int i=1;i<=t;i++){	
		b[int(a*i)]++;
	}
	}	 
	for(int i=1;;i++){
		if(b[i]%2==1){
			cout<<i;
			break;
		}
	}	
	return 0;
 } 
// #include<bits/stdc++.h>
//using namespace std;
//int a[2000001],n;
//double x,y;
//int main(){
//	cin>>n;
//	for(int i=1;i<=n;i++){
//		cin>>x>>y;
//		for(double j=1;j<=y;++j){
//			if(a[int(j*x)]==0) a[int(j*x)]=1;
//			else a[int(j*x)]=0;
//		}
//	}
//	for(int i=1;;i++){
//		if(a[i]==1){
//			cout<<i;
//			break;
//		}
//	}
//	return 0;
//}
