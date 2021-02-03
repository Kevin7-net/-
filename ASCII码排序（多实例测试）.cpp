
//输入三个字符后，按各字符的ASCII码从小到大的顺序输出这三个字符。
//输入数据有多组，每组占一行，有三个字符组成，之间无空格。
//对于每组输入数据，输出一行，字符中间用一个空格分开。

#include<iostream>
using namespace std;

int main()
{
	char a,b,c,t;
	while(cin>>a>>b>>c){
		getchar();	//注意需要抵掉一个回车键
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
