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
			b[i]+=a[i][j];    //ÿһ�е������ 
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			c[i]+=a[j][i];    //ÿһ�е������ 
		} 
	}
	for(int i=1;i<=n;i++){
		if(b[i]%2!=0||c[i]%2!=0){  //�������Ϊ��������x=0 
			x=0;
		}
	}
	if(x){                  //���x��Ϊ1����˵������Ϊ������OK 
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
	
		if(sum1==1&&sum2==1){     //ÿ��ÿ�и����ҽ���һ����������Ըı� 
			cout<<"Change bit("<<m-1<<","<<v-1<<")";
		}
		else{
			cout<<"Corrupt";
		}
	
	}
	return 0;
 } 
