#include<iostream>
using namespace std;

int main()
{
	int m=1,a=0;
	string s;
	char c;  //��¼������ʲô 
	cin>>s;
	int len=s.size();  //����Ϊlen 
	for(int i=0;i<len;i++){
        if(s[i]>='0'&&s[i]<='9') 
		a++;         //��¼����λ 
        else         //�������ţ���¼���������� 
        {
            c=s[i];
        	m=0;    //m=0,�ж��Ƿ��з��ų��� 
            break;
        } 
    }
	int cnt=a;   //aΪ����λ 
	cnt--;
	
	while(s[cnt]=='0'&&cnt>0)
	 cnt--;        //ȥ������ǰ��0�� 
	 
	for(int i=cnt;i>=0;i--)    //�����һ���� 
       cout<<s[i];
       
    if(m==1) 
	return 0;      //�޷���return 0 
	
	else if(c=='%') {
	cout<<"%";
	return 0;
	}
	
	if(c=='.')
	cout<<".";
	else if(c=='/')
	cout<<"/";
	
	//�ӷ���λ��ʼ����
	 
	int b=a+1;      //aΪ����λ
	int d=len-1;
	while(s[b]=='0'&&b<d)
	 b++;          //ȥ��ĩβ0 
	 
	while(s[d]=='0'&&d>b)
		d--;      //ȥ������ǰ��0

	for(int i=d;i>=b;i--){
		cout<<s[i];
	}
	
	return 0;
 } 
