#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	string s;
	getline(cin,s);
	int sum=s.length();
	int len=sum;
	for(int i=0;i<len;i++){
		if(s[i]==' '){
			sum--;
		}
	}
	cout<<sum;
	return 0;
}
