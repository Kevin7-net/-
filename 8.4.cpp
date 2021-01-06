#include<iostream>
#include<string>
using namespace std;

int main()
{
	int sum[8]={0,0,0,0,0,0,0,0};
	int a[8]; 
	string name[]={"员工1","员工2","员工3","员工4","员工5","员工6","员工7","员工8"};
	int arr[][7]={
	{2,4,3,4,5,8,8},
	{7,3,4,3,3,4,4},
	{3,3,4,3,3,2,2},
	{9,3,4,7,3,4,1},
	{3,5,4,3,6,3,8},
	{3,4,4,6,3,4,4},
	{3,7,4,8,3,8,4},
	{6,3,5,9,2,7,9}};
	for(int i=0;i<8;i++){
		for(int j=0;j<7;j++){
			sum[i]+=arr[i][j];
		}
	}
	for(int i=0;i<8;i++){
		a[i]=sum[i];
	}
	for(int i=0;i<7;i++){
		for(int j=0;j<7-i;j++){
			if(sum[j]<sum[j+1]){
				int tmp;
				tmp=sum[j];
				sum[j]=sum[j+1];
				sum[j+1]=tmp;
			}
		}
	}
	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++){
			if(sum[i]==a[j]){
				cout<<name[j]<<" ";
			}
		}
	}
	cout<<endl;
	for(int i=0;i<8;i++){
		cout<<sum[i]<<" ";
	}
	return 0;
 } 
