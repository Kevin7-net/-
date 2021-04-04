#include<iostream>
using namespace std;

int main()
{
	int a[10000],b[100],j=0;
	int n,sum=1;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		if(a[i+1]-a[i]==1){
			sum++;
		}
		else{
			b[j]=sum;
			j++;
			sum=1;
		}
	}
	int max=b[0];
	for(int k=0;k<j;k++){
		if(b[k]>max){
			max=b[k];
		}
	}
	cout<<max;
	return 0;
}
