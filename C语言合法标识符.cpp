#include<iostream>
using namespace std;

int main()
{
	string s;
	getline(cin,s); 
	int m=1;
	int len=s.length();
	if((s[0]<='A'||s[0]>='z')&&s[0]!='_'){
		cout<<"no";
		return 0;
	}	
	for(int i=0;i<len;i++){
		if((s[i]<='0'||s[i]>='9')&&s[i]!='_'&&(s[i]<='A'||s[i]>='z')){
			m=0;		
		}
	}
	if(m==1)
	cout<<"yes";
	else
	cout<<"no";
	return 0;
 } 
