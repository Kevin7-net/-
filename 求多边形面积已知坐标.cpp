#include<iostream>	//bits/stdc++.h
#include<iomanip>
using namespace std; 

int main()
{
	double a[101][2];
	int n;
	while(cin>>n,n!=0){
		for(int i=0;i<n;i++){
			cin>>a[i][0]>>a[i][1];
		}
		a[n][0]=a[0][0];
		a[n][1]=a[0][1];
		double sum=0;
		for(int i=0;i<n;i++){
			sum+=(a[i][0]*a[i+1][1]-a[i+1][0]*a[i][1]);			
		}
		sum/=2;
		cout<<fixed<<setprecision(1)<<sum<<endl;
	}
	return 0;
}
