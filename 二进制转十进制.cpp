#include<iostream>
using namespace std;

int main()
{
	char ch;
	int d=0;
	while(ch=getchar(),ch!='\n'){
		d=d*2+(ch-'0');
	} 
	cout<<d;
	return 0;
}
