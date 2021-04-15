#include<iostream>
using namespace std;
int a[101][101];     //必须在上面，不知道为啥 
int main()
{
	
	int n,m,x,y,sum=0,k;
	cin>>n>>m>>k;
	
	for(int i=0;i<m;i++){    //火把个数 
		cin>>x>>y;           //火把坐标 
		for(int j=x-1;j<=x+1;j++){		
		for(int k=y-1;k<=y+1;k++){
			a[j][k]=1;
		}
		}
		a[x-2][y]=1;
		a[x+2][y]=1;
		a[x][y+2]=1;
		a[x][y-2]=1;
	}

	for(int i=0;i<k;i++){    //萤石个数 
	cin>>x>>y;               //萤石坐标 
		for(int j=x-2;j<=x+2;j++){
			for(int k=y-2;k<=y+2;k++){
				a[j][k]=1;
			}
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(a[i][j]==0){
				sum++;
			}
		}
	}
	cout<<sum;
	return 0;
}
