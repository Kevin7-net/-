#include<iostream>
using namespace std;

int a[10001],s[101],e[101];
int main(){
	int l,m;
	int ans=0;
	cin>>l>>m;
	for(int i=0;i<m;i++){
		cin>>s[i]>>e[i];
		for(int j=s[i];j<=e[i];j++){
			a[j]=1;//����·����ξ�����������λ1
		}
	}
	for(int i=0;i<=l;i++){
		if(a[i]==0)
		ans++;//û����ǹ��ĵ�˵��û���޵�����������
	}
	cout<<ans;
	return 0;
} 
