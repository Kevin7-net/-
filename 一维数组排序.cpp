#include<iostream>
using namespace std;

void sort(int a[], int n)
{
	int tep;
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j]>a[j+1]){
				tep=a[j];
				a[j]=a[j+1];
				a[j+1]=tep; 
			}
		}
	}
}
void PrintArr(int a[], int n) /*输出数组a的前n个元素*/
{
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
} 
int main()
{
	int a[100],n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,n);
	PrintArr(a,n);
}
