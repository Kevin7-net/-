#include<iostream>
using namespace std;
int a[101][101];     //���������棬��֪��Ϊɶ 
int main()
{
	
	int n,m,x,y,sum=0,k;
	cin>>n>>m>>k;
	
	for(int i=0;i<m;i++){    //��Ѹ��� 
		cin>>x>>y;           //������� 
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

	for(int i=0;i<k;i++){    //өʯ���� 
	cin>>x>>y;               //өʯ���� 
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
