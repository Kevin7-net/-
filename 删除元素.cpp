#include<iostream>
using namespace std;

void del(int a[], int n, int i)  /*ɾ������a���±�Ϊi��Ԫ��*/
{
	for(int j=i;j<n-1;j++){
		a[j]=a[j+1];
	}
} 
void PrintArr(int a[], int n) /*�������a��ǰn��Ԫ��*/
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
