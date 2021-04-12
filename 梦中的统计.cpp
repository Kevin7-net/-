#include<iostream>
using namespace std;

int main()
{
	int m,n,d,x;
	int a[10]={0};
	cin>>m>>n;
	for(int i=m;i<=n;i++){
		int x=i;
		while(x>0){
			d=x%10;
			a[d]++;
			x/=10;
		}
	}
	for(int i=0;i<10;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
