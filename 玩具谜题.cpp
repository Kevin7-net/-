#include<iostream>
using namespace std;

struct ss{
	string name;
}s[100005];
int main()
{
	int n,m,x=1;
	int a[100005],b[100005],c[100005];
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>s[i].name;
	}
	for(int i=1;i<=m;i++){
		cin>>b[i]>>c[i];      //b[i]��ʾ����������������c[i]��ʾ������ 
	}
	int i=1;
	while(i<=m){
		if(b[i]==0){ 	         //b[i]=0��ʾ��������1��ʾ������ 
			if(a[x]==0){         //˳ʱ�루����  //0��ʾ�ڳ���Ȧ�ڣ�1��ʾ����Ȧ�� 
				if(x-c[i]<=0){    //x��ʾλ�ô��� 
					int y=c[i]-x;
					x=n;
					x-=y;
				}
				else{
					x-=c[i];
				}
			}
			else{                //��ʱ�루�ӣ� 
				if(x+c[i]>n){
					int z=x+c[i]-n;
					x=0;
					x+=z;
				}
				else{
					x+=c[i];
				}
			} 
		}    
		else{                  //b[i]=1��ʾ������ 
			if(a[x]==1){      //˳ʱ�루����   //����Ȧ��
				if(x-c[i]<=0){
					int y=c[i]-x;
					x=n;
					x-=y;
				}
				else{
					x-=c[i];
				}
			}
			else{            //��ʱ�루�ӣ�  
				if(x+c[i]>n){
					int z=x+c[i]-n;
					x=0;
					x+=z;
				}
				else{
					x+=c[i];
				}
			} 
		}
		i++; 
	}
	cout<<s[x].name;
	return 0; 
}
