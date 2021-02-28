#include<iostream>
using namespace std;

int MinIndex(int a[], int n)
{
	int min=a[0];
	int m=0;
	for(int i=0;i<n;i++){ 
	if(a[i]<min){
		min=a[i];
		m=i;
	}
	} 
	return m;
}
int MaxIndex(int a[], int n)
{
	int max=a[0];
	int m=0;
	for(int i=0;i<n;i++){ 
	if(a[i]>max){
		max=a[i];
		m=i;
	}
	} 
	return m;
}
int main()
{
	int n,a[100],x,y;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	x=MinIndex(a,n);
	int tep=a[x];
	a[x]=a[0];
	a[0]=tep;
	y=MaxIndex(a,n);
	int tmp=a[y];
	a[y]=a[n-1];
	a[n-1]=tmp;
	for(int j=0;j<n;j++){
		cout<<a[j]<<" ";
	}
	return 0;
}
