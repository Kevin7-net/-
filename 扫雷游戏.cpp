#include<bits/stdc++.h>
using namespace std;

int main()
{
	int m,n;
	int a[105][105];
	char c;
	memset(a,0,sizeof(a));//地图最开始清空 
	cin>>m>>n;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			cin>>c;
			if(c=='*'){
				a[i][j]=1;
			}
		}
	}
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(a[i][j]==1){
				cout<<"*";
			}
			else{
				cout<<a[i-1][j-1]+a[i-1][j]+a[i-1][j+1]
					 +a[i][j-1]     +       a[i][j+1]
					 +a[i+1][j-1]+a[i+1][j]+a[i+1][j+1];
			}
		}
		cout<<endl;
	}
	return 0;
 } 
