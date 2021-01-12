#include<iostream>
using namespace std;

int main()
{
	int m,n,x=0;
	cin>>m>>n; 
	for(int i=n;i>=m;i--){
		if(i%7==0&&i%4!=0){
			cout<<i<<endl;
			x=1;
			break;
		}
	}
	if(x==0){
		cout<<"no"<<endl;
	}
	return 0;
 } 
