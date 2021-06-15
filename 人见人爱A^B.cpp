#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int a,b;
	while(cin>>a>>b){
		if(a==0&&b==0){
			return 0;
		}
		if(a==0||b==0){
			cout<<"0"<<endl;
		}
		else{
			int c=a;
			for(int i=1;i<b;i++){
				a*=c;
				a%=1000;
				
			}
			cout<<a<<endl;
		}		
	}
	return 0;
}
