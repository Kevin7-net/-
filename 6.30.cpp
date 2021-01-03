#include<iostream>
#include<string>
#include<ctime>
#include<cstdlib>
using namespace std;
void shuffle(string& s);

int main()
{
	string str;
	cin>>str;
	shuffle(str);
	
 } 
 void shuffle(string& s){
 	int len=s.length();
	srand((int)time(NULL));	
	for(int i=0;i<len;i++){
		int tmp=rand()%len;
		string t=s;
		s[i]=s[tmp];
		s[tmp]=t[i];
	}
		cout<<s;
	
 }
