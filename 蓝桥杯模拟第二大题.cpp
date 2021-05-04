#include<iostream>
using namespace std;

int main()
{
	string s;
	cin>>s;
	int len=s.length();
	for(int i=0;i<len;i++){
		if(s[0]>='a'&&s[0]<='z'){
			s[0]-=32;	
		}
		if(s[i]>='A'&&s[i]<='Z'){
			s[i]+=32;
		}
	}
	cout<<s;
	return 0;
 } 
