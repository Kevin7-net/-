#include<iostream>
using namespace std;

int main()
{
	string s;
	int a[30]={0},x=1;
	getline(cin,s);
	int len=s.length();
	for(int i=0;i<len;i++){
		if(s[i]>='A'&&s[i]<='z'){
			if(isupper(s[i])){
				s[i]=tolower(s[i]);
			}
			a[s[i]-'a'+1]++;
		}
	}
	int max=a[1];
	for(int i=1;i<=26;i++){
		if(a[i]>max){
			max=a[i];
			x=i;
		}
	}
	cout<<char(x+'a'-1);
	return 0;
}
