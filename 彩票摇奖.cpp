#include<iostream>
using namespace std;

int main()
{
	int n,sum=0;
	int a[10],b[10],c[10]={0};
	cin>>n;
	for(int i=0;i<7;i++){   //中奖号码 
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<7;j++){
			cin>>b[j];
		}
		sum=0;
	for(int i=0;i<7;i++){
		for(int j=0;j<7;j++){
			if(b[j]==a[i]){   //与中奖号码比较 
				sum++;
			}
		}
	}
	c[7-sum]++;	//********
	}
	for(int i=0;i<7;i++){ //输出特等奖到六等奖的个数 
		cout<<c[i]<<" ";
	}
	return 0;
}
