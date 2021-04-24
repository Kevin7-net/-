#include<iostream>
using namespace std;

int main()
{
	string s1,s2;
	int sum1=1,sum2=1;
	cin>>s1>>s2;
	int len1=s1.length();
	int len2=s2.length();
	for(int i=0;i<len1;i++){
		sum1*=s1[i]-'A'+1;
	}
	for(int i=0;i<len2;i++){
		sum2*=s2[i]-'A'+1;
	}
	int a=sum1%47;
	int b=sum2%47;
	if(a==b){
		cout<<"GO";
	}
	else{
		cout<<"STAY";
	}
	return 0;
 } 
