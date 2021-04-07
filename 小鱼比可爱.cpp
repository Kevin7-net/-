#include<iostream>
using namespace std;

int main()
{
	int n,a[100];
	int b[100]={0};
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=2;i<=n;i++){
		for(int j=1;j<i;j++){
			if(a[i]>a[j]){
				b[i]++;
			}
		}
	}
	for(int i=1;i<=n;i++){
		cout<<b[i]<<" ";
	}
	return 0;
}
