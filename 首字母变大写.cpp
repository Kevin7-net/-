#include<iostream>
using namespace std;

int main()
{
	string s;
	getline(cin,s);
	int len=s.length();
	if(islower(s[0])){
		s[0]=toupper(s[0]);
	}
	for(int i=0;i<len;i++){
		if(s[i]==' '&&s[i+1]>='a'&&s[i+1]<='z'){
			s[i+1]=toupper(s[i+1]);
		}
	}
	cout<<s;
	return 0;
} 
