#include<iostream>
using namespace std;

int main()
{
	int a[3]={0};
	string s;
	cin>>s;
//	cout<<s[0]-48; 
	int len=s.length();
	for(int i=0;i<len-1;i++){
		if(s[i]=='='){
			if(s[i+1]>='0'&&s[i+1]<='9'){
				a[s[i-2]-'a']=s[i+1]-'0';
			}
			else{
				a[s[i-2]-'a']=a[s[i+1]-'a'];
			}
		}
	}
	for(int i=0;i<3;i++){
		cout<<a[i]<<" ";
	}
	return 0;
 } 
