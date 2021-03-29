#include<iostream>
using namespace std;

int main()
{
	string s,res;
	cin>>s;
	for(int i=0;i<s.size();i++){
		if(i+1<s.size()&&s[i+1]<='9'){
			int k=s[i+1]-'0';
			while(k>0){ 
			res+=s[i];
			k--;
			}
			i++;
		}
		else{
			res+=s[i];
		}
	}
	cout<<res;
	return 0;
 } 
