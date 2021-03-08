#include<iostream>
using namespace std;

int main()
{
	int a,b,c,d,e,f,g;
	cin>>a>>b>>c>>d;
	e=d-b;
	if(e<0){
		f=c-a-1;
		g=d+60-b;
	}
	else{
		f=c-a;
		g=e;
	}
	cout<<f<<" "<<g;
	return 0;
}
