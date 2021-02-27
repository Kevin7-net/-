#include<iostream>
using namespace std;

int insert(int a[], int n, int num)
{
	if(n==1){
		if(num>=a[0]){
			a[1]=num;
		}
		else{
			a[1]=a[0];
			a[0]=num;
		}
	}
	else{ 
	int b[100];
	for(int i=0;i<n;i++){
		b[i]=a[i];
	}
	for(int i=0;i<n;i++){
		int tep=0;
		if(num>a[i]&&num<=a[i+1]){
			tep=a[i+1];
			a[i+1]=num;
			a[i+2]=tep;
			for(int j=i+3;j<n+1;j++){
				a[j]=b[j-1];
			}
		}
		else if(num<=a[0]){
			a[0]=num;
			for(int i=1;i<n+1;i++){
				a[i]=b[i-1];
			}
		}
	}
	} 
}
void PrintArr(int a[], int n) /*输出数组a的前n个元素*/
{
	int m=1;
	for(int i=0;i<n;i++){
		if(m==1){
			cout<<a[i];
			m=0;
		}
		else{ 
		cout<<" "<<a[i];
		} 
	}
} 
int main()
{
	int n,m,a[100]={0};
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cin>>m;
	insert(a,n,m);
	PrintArr(a,n+1);
	return 0;
}
