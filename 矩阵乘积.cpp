#include<iostream>
using namespace std;

int main()
{
	int m,n,p;
	int a[15][15]={0};
	int b[15][15]={0};
	int c[15][15]={0};
	cin>>m>>n>>p;
	
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<p;j++){
			cin>>b[i][j];
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<p;j++){
			for(int k=0;k<n;k++){
				c[i][j]+=a[i][k]*b[k][j];   //**********
			}		
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<p;j++){
			cout<<c[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
