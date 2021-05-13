#include<iostream>
using namespace std;

int main()
{
	string s;
	int warn=0,mis=0,x=0;
	cin>>s;
	int len=s.length();
	for(int i=0;i<len;i++){
		if(s[i]=='a'){
			if(s[i+1]=='w'&&s[i+2]!='a'||s[i+1]=='w'&&s[i+2]=='a'&&s[i+3]!='w'){
				warn++;
				i++;
			}
			else if(s[i+1]=='w'&&s[i+2]=='a'&&s[i+3]=='w'){
				x=0;
				for(int j=i;s[j]=='a';j+=2){
					if(s[j+1]=='w'){
						x++;
					}
					else{
						break;
					}
				}
				mis++;
				i+=2*x-1;				
			}
		}
		else if(s[i]=='w'){
			if(s[i+1]=='a'&&s[i+2]!='w'||s[i+1]=='a'&&s[i+2]=='w'&&s[i+3]!='a'){
				warn++;
				i++;
			}
			else if(s[i+1]=='a'&&s[i+2]=='w'&&s[i+3]=='a'){
				x=0;
				for(int j=i;s[j]=='w';j+=2){
					if(s[j+1]=='a'){
						x++;
					}
					else{
						break;
					}
				}
				mis++;
				i+=2*x-1;				
			}
		}
	}
	cout<<warn<<endl<<mis;
	return 0;
}

