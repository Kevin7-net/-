#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	string s;
	char s1[10];
	long long sum=0;
	cin>>s;
	int len=s.length();
	for(int i=0;i<len;i++){
		s1[i]=s[len-1-i];    //ÄæÐò×Ö·û´® 
	}
	for(int i=0;i<len;i++){
		if(s1[i]>='0'&&s1[i]<='9'){
			sum+=(s1[i]-'0')*pow(16,i);
		}
		else if(s1[i]>='A'&&s1[i]<='F'){
			sum+=(s1[i]-'A'+10)*pow(16,i);
		}
	}
	cout<<sum;
	return 0;
 } 
