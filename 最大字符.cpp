#include<iostream>
using namespace std;

int main()
{
	char i,j,k;
	cin>>i>>j>>k;
	int a,b,c;
	a=(int)i;
	b=(int)j;
	c=(int)k;
	if(a>b){
		if(a>c){
			cout<<i;
		}
		else if(a<c){
			cout<<k;
		}
	}
	else if(b>a){
		if(b>c){
			cout<<j;
		}
		else if(b<c){
			cout<<k;
		}
	} 
	return 0;
 } 
