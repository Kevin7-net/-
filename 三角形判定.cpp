#include<iostream>
using namespace std;

int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	if(a+b>c){
		if(b+c>a){
			if(a+c>b){
				cout<<"Yes";
			}
			else{
				cout<<"No";
			}
		}
		else{
			cout<<"No";
		}
	}
	else{
		cout<<"No";
	}
	
	return 0;
 } 
