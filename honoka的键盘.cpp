//������޷�ֻ�������������VK KV KK VV
//���У�VK�Ƿ���Ҫ��ģ�KK��VV���ܸ�һ���ַ���ΪVK��ֻ��KV�����Ը�
//�ȴ�ͷ��β��һ�飬����ȷ��VK����ΪX
//����һ���ҵ�һ��KK �� VV��ͣ �ҵ�������ѭ������Ϊ����ı�һ�� 
#include<iostream>
using namespace std;

int main()
{
	string s;
	int n,sum=0;
	cin>>n;
	cin>>s;
	for(int i=0;i<n-1;i++){
		if(s[i]=='V'&&s[i+1]=='K'){
			sum++;
			s[i]='v';
			s[i+1]='k';
		}		
	}
	for(int i=0;i<n-1;i++){
		if(s[i]==s[i+1]){
			sum++;
			break;
		}
	}
	cout<<sum;
	return 0;
}
