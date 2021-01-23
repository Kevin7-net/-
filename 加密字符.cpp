#include<iostream>
using namespace std;

int main()
{
	char c;
	c=getchar();
	while(c!='@'){
		if(c>='A'&&c<='Z'){
			c+=32;
		}
		if(c>='a'&&c<'z'){
			c+=1;
		}
		else if(c=='z'){
			c='a';
		}
	cout<<c;
	c=getchar();
	}
	return 0;
}
