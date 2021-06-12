#include<iostream>
#include<string> 
using namespace std;

int main()
{
	int n;
	string s;
	int sum=0;
	cin>>n;
	getchar();
	while(n){		
	getline(cin,s);
	sum=0;
	int len=s.length();
	for(int i=0;i<len;i++){
		if(s[i]>=0&&s[i]<=127){
		}
		else
		sum++;
	}
	cout<<sum/2<<endl;;	
	n--;
	}
	return 0;	
} 

