#include<iostream>
using namespace std;

int main()
{
	int a[1000],i=0,n,b=0,min=0;
	cin>>n;
	for(i=0;i<n;i++){ 
	cin>>a[i];
	} 
	min=a[0];
	for(int j=1;j<n;j++){
		if(min>a[j]){
			min=a[j];
			b=j;
		}
	}
	cout<<min<<" "<<b;
	return 0; 
}
