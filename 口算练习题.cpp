#include<iostream>
using namespace std;
	int n,a,b;
	string s;
	char c;
int len(int num)   //先写一个求长度的函数 
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
		x=1;   //因为还有一个负号 
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
		int x;   //x代表长度 
		switch(s[0]){
			case 'a':
				cin>>a>>b;
				cout<<a<<"+"<<b<<"="<<a+b<<endl;				
				c=s[0];          //c代表上次的符号，储存下来 
				x=len(a+b)+2;    //把得到的数和符号的总长度算出来 
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
			default:         //如果不是字符的话 
				cin>>b;      //在输入一个数字b 
				a=0;
				int l=s.size();     
				for(int j=0;j<l;j++){ 
					a=a*10+s[j]-'0';   //将字符'a'转化成数字a的数字 
				}
				switch(c){      //判断一下上次储存的符号是什么 
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
		cout<<x+len(a)+len(b)<<endl;  //x再加上数字a,b的长度就是总长度 
	}	
	
	return 0;
 } 
