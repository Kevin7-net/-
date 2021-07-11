#include<iostream>
using namespace std;

int main()
{
	int a[100],b[100],c[100];
	int m,n;
	cin>>m;
	for(int i=0;i<m;i++){
		cin>>a[i];
	}
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>b[i];
	}
	int flag=1,flag1=1,cnt=0;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(a[i]==b[j]){
				flag=0;
				flag1=1;
				for(int k=0;k<cnt;k++){
					if(a[i]==c[k]){
						flag1=0;
					}
				}
				if(flag1){
					cout<<a[i]<<" ";
					c[cnt]=a[i];
					cnt++;
				}
			} 
		}
	}
	if(flag){
		cout<<"No Answer";
	}
//	else
//		for(int i=0;i<cnt;i++){
//			cout<<c[i]<<" ";
//		}
	return 0;
}
