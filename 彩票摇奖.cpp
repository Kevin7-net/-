#include<iostream>
using namespace std;

int main()
{
	int n,sum=0;
	int a[10],b[10],c[10]={0};
	cin>>n;
	for(int i=0;i<7;i++){   //�н����� 
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<7;j++){
			cin>>b[j];
		}
		sum=0;
	for(int i=0;i<7;i++){
		for(int j=0;j<7;j++){
			if(b[j]==a[i]){   //���н�����Ƚ� 
				sum++;
			}
		}
	}
	c[7-sum]++;	//********
	}
	for(int i=0;i<7;i++){ //����صȽ������Ƚ��ĸ��� 
		cout<<c[i]<<" ";
	}
	return 0;
}
