#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	int a[201];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
