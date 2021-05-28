#include<iostream>
using namespace std;

int main()
{
	string s;
	int sum=0;
	int a[1000];
	cin>>s;
	int j=0;
	int len=s.length();
	for(int i=0;i<len;i++){
		if(s[i]>='0'&&s[i]<='9'){
			a[j]=s[i]-'0';
			j++;
		}
	}
	for(int i=0;i<j;i++){
		sum=sum*10+a[i];
	}
	cout<<2*sum;
	return 0;
} 
