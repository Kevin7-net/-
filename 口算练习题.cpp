#include<iostream>
using namespace std;
	int n,a,b;
	string s;
	char c;
int len(int num)   //��дһ���󳤶ȵĺ��� 
{
	int x=0;
	if(num==0)
	return 1;
	else if(num>0){
		while(num>0){
			x++;
			num/=10;
		}
		return x;
	}
	else{
		num=-num;
		x=1;   //��Ϊ����һ������ 
		while(num>0){
				x++;
			num/=10;
		}
		return x;
	}
}
int main()
{	
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s;
		int x;   //x������ 
		switch(s[0]){
			case 'a':
				cin>>a>>b;
				cout<<a<<"+"<<b<<"="<<a+b<<endl;				
				c=s[0];          //c�����ϴεķ��ţ��������� 
				x=len(a+b)+2;    //�ѵõ������ͷ��ŵ��ܳ�������� 
				break;
			case 'b':
				cin>>a>>b;
				cout<<a<<"-"<<b<<"="<<a-b<<endl;				
				c=s[0];
				x=len(a-b)+2;
				break;
			case 'c':
				cin>>a>>b;
				cout<<a<<"*"<<b<<"="<<a*b<<endl;				
				c=s[0];
				x=len(a*b)+2;
				break;
			default:         //��������ַ��Ļ� 
				cin>>b;      //������һ������b 
				a=0;
				int l=s.size();     
				for(int j=0;j<l;j++){ 
					a=a*10+s[j]-'0';   //���ַ�'a'ת��������a������ 
				}
				switch(c){      //�ж�һ���ϴδ���ķ�����ʲô 
					case 'a':
						cout<<a<<"+"<<b<<"="<<a+b<<endl;
						x=len(a+b)+2;
						break;
					case 'b':
						cout<<a<<"-"<<b<<"="<<a-b<<endl;
						x=len(a-b)+2;
						break;
					case 'c':
						cout<<a<<"*"<<b<<"="<<a*b<<endl;
						x=len(a*b)+2;
						break;
					default:
						break; 
				}				
		}
		cout<<x+len(a)+len(b)<<endl;  //x�ټ�������a,b�ĳ��Ⱦ����ܳ��� 
	}	
	
	return 0;
 } 
