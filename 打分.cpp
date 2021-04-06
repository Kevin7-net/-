#include<iostream>
#include<iomanip>
using namespace std;

int main()
{ 
	int n,arr[100];
	double sum=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1-i;j++){
			if(arr[j]>arr[j+1]){
				int tmp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;
			}
		}
	} 
	arr[0]=0;
	arr[n-1]=0;
	for(int i=0;i<n;i++){
		sum+=arr[i];
	}
	cout<<fixed<<setprecision(2)<<sum/(n-2);
	return 0;
} 
