#include<iostream>
#include<string>
using namespace std;

int main()
{
	int n;
	string s;
	cin>>n;
	getchar();
	for(int i=0;i<n;i++){
		getline(cin,s);
		int sum=0,f1=0,f2=0,f3=0,f4=0;
		int len=s.length();
		if(len<8||len>16){
			cout<<"NO"<<endl;
		}
		else{
			for(int j=0;j<len;j++){
			if(s[j]>='A'&&s[j]<='Z'){
				f1=1;
			}
			if(s[j]>='a'&&s[j]<='z'){
				f2=1;
			}
			if(s[j]>='0'&&s[j]<='9'){
				f3=1;
			}
			if(s[j]=='~'||s[j]=='!'||s[j]=='@'||s[j]=='#'||s[j]=='$'||s[j]=='%'||s[j]=='^'){
				f4=1;
			}
		}
		if(f1)
		sum++;
		if(f2)
		sum++;
		if(f3)
		sum++;
		if(f4)
		sum++;
		if(sum>=3){
			cout<<"YES"<<endl;
		}
		else
		cout<<"NO"<<endl;
		}		
	}
	return 0;
	
}
