#include<iostream>
using namespace std;

int main()
{
	int a[102][102],x=1,sum2=0,sum1=0,m=0,v=0;
	int b[102]={0},c[102]={0},d[102];
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			b[i]+=a[i][j];    //每一行的数相加 
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			c[i]+=a[j][i];    //每一列的数相加 
		} 
	}
	for(int i=1;i<=n;i++){
		if(b[i]%2!=0||c[i]%2!=0){  //如果都不为奇数，令x=0 
			x=0;
		}
	}
	if(x){                  //如果x仍为1，则说明都不为奇数，OK 
		cout<<"OK";
	}
	else{
		for(int i=1;i<=n;i++){	
			if(b[i]%2==1){
			sum1++;          
			m=i;
		}
		}
		for(int j=1;j<=n;j++){
			if(c[j]%2==1){
				sum2++;
				v=j;
			}
	}		
	
		if(sum1==1&&sum2==1){     //每行每列个有且仅有一个奇数则可以改变 
			cout<<"Change bit("<<m-1<<","<<v-1<<")";
		}
		else{
			cout<<"Corrupt";
		}
	
	}
	return 0;
 } 
