//RedraimentСʱ����·ϲ���ı�����������ϲ����¥����������ȥ�� 
//�����׵���һ��ֻ������һ�׻���һ���ӱ������ס� ����һ����N��̨�ף�
//�������һ��Redraiment�ӵ�0�׵���N�׹��м����߷���
#include<iostream>
using namespace std;

int main()
{
	int a[41],i,n;
	a[1]=1;
	a[2]=2;
	for(i=3;i<=40;i++){
		a[i]=a[i-1]+a[i-2];
	}
	while(cin>>n,n!=0){
		cout<<a[n]<<endl;
	} 
	return 0;
 } 
