#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	string s;
	int sum=0,len;
	getline(cin,s);
	len=s.size();
	for(int i=0;i<len;i++){
		if(s[i]=='a'||s[i]=='d'||s[i]=='g'||s[i]=='j'||s[i]=='m'||s[i]=='p'||s[i]=='t'||s[i]=='w'||s[i]==' '){
			sum++;
		}
		else if(s[i]=='b'||s[i]=='e'||s[i]=='h'||s[i]=='k'||s[i]=='n'||s[i]=='q'||s[i]=='u'||s[i]=='x'){
			sum+=2;
		}
		else if(s[i]=='c'||s[i]=='f'||s[i]=='i'||s[i]=='l'||s[i]=='o'||s[i]=='r'||s[i]=='v'||s[i]=='y'){
			sum+=3;
		}
		else if(s[i]=='s'||s[i]=='z'){
			sum+=4;
		}
	}
	cout<<sum;
	return 0;
 } 
