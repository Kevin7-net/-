
//���������ַ��󣬰����ַ���ASCII���С�����˳������������ַ���
//���������ж��飬ÿ��ռһ�У��������ַ���ɣ�֮���޿ո�
//����ÿ���������ݣ����һ�У��ַ��м���һ���ո�ֿ���

#include<iostream>
using namespace std;

int main()
{
	char a,b,c,t;
	while(cin>>a>>b>>c){
		getchar();	//ע����Ҫ�ֵ�һ���س���
		if(a>b){
			t=a;
			a=b;
			b=t;
		}
		if(b>c){
			t=b;
			b=c;
			c=t;
		}
		if(a>b){
			t=a;
			a=b;
			b=t;
		}
		cout<<a<<" "<<b<<" "<<c<<endl;
	}
	return 0;
}
