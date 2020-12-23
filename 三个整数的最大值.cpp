#include<iostream>
using namespace std;

int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	if(a>b){
		if(a>c){
			cout<<a;
		}
		else if(a<c){
			cout<<c;
		}
	}
	else if(b>a){
		if(b>c){
			cout<<b;
		}
		else if(b<c){
			cout<<c;
		}
	}
	return 0; 
 } 
