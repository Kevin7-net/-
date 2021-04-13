#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	int n,m;
	cin>>n;
	string s;
	cin>>s;
	int len=s.size();
	for(int i=0;i<len;i++){
		for(int j=0;j<n;j++){
			s[i]++;
			if(s[i]>'z')
			s[i]='a';
		}
	}
	cout<<s;
	return 0;
}
