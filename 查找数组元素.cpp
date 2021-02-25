#include<iostream>
#include<iomanip>
using namespace std;

int find(int a[], int n, int x)
{
	int m=0;
	for(int i=0;i<n;i++){
		if(a[i]==x){
			m=1;
			return i;
		}
	}
	if(m==0)
	return -1;
}
void del(int a[], int n, int i)  /*删除数组a中下标为i的元素*/
{
	for(int j=i;j<n-1;j++){
		a[j]=a[j+1];
	}
} 
void PrintArr(int a[], int n) /*输出数组a的前n个元素*/
{
	for(int i=0;i<n-1;i++){
		cout<<setw(4)<<a[i];
	}
} 
int main()
{
	int n,m,x,y,a[10];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cin>>x;
	y=find(a,n,x);
	if(y==-1){
		cout<<"Not Found";
	}
	else{ 
	del(a,n,y);
	PrintArr(a,n);
	}
	return 0;
}
