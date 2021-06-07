#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char c[101];
	int n,x;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>c>>x;
		int len=strlen(c);
		for(int i=0;i<len;i++){
			if(c[i]=='.'&&i+x<len){   //i+x********* 
				cout<<c[i+x]<<endl;
			}
			else if(c[i]=='.'&&i+x>=len){
				cout<<"0"<<endl;
				break;
			}
		}
	}
	return 0;
}
