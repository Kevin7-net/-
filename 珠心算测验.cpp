#include<iostream>
using namespace std;

int main()
{
	int a[100],b[100];
	int n,sum=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		b[i]=0;
	}
	for(int i=0;i<n-2;i++){
		for(int j=i+1;j<n;j++){
			for(int k=0;k<n;k++){
				if(a[i]+a[j]==a[k]&&b[k]!=1){	//***********
					sum++;
					b[k]=1;                     //***********
				}
			}
		}
	}
	cout<<sum;
	return 0;
 } 
