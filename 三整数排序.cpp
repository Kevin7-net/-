#include<iostream>
using namespace std;

int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	if(a>=b){
		if(b>=c){
			cout<<a<<" "<<b<<" "<<c;
		}
		else if(b<=c){
			if(a<=c){
			cout<<c<<" "<<a<<" "<<b;
			}
		else{
			cout<<a<<" "<<c<<" "<<b;
		}
		}
	}
	else if(b>=a){
		if(a>=c){
			cout<<b<<" "<<a<<" "<<c;
		}
		else if(a<=c){
			if(b<=c){
			cout<<c<<" "<<b<<" "<<a;
			}
			else{
			cout<<b<<" "<<c<<" "<<a;
			}
		}
	}
	 
	return 0; 
 } 
