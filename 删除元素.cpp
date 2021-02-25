#include<iostream>
using namespace std;

void del(int a[], int n, int i)  /*删除数组a中下标为i的元素*/
{
	for(int j=i;j<n-1;j++){
		a[j]=a[j+1];
	}
} 
void PrintArr(int a[], int n) /*输出数组a的前n个元素*/
{
	for(int i=0;i<n-1;i++){
		cout<<a[i]<<" ";
	}
} 
int main()
{
	int n,m,a[10];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cin>>m;
	del(a,n,m);
	PrintArr(a,n);
	return 0;
}
