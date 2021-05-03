#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	int a[63000]={0};
	int win=0,lo=0;
	char s;
		//11分制 
	for(int i=0;cin>>s&&s!='E';i++){
			if(s=='W'){
				a[i]=1;	
			}
			else if(s=='L'){
				a[i]=2;
			}
		}
		for(int i=0;;i++){
			if(a[i]==1)
				win++;
			else if(a[i]==2){
				lo++;
			}
			else if(a[i]==0){
				cout<<win<<":"<<lo<<endl; //如果a[i]等于0，结束前把最后一次的win和lo输出 
				break;
			}			
		if(win>=11&&win>lo+1||lo>=11&&lo>win+1){
			cout<<win<<":"<<lo<<endl;
			win=0;
			lo=0;
		}
		}
		cout<<endl;
		win=0;
		lo=0;
		//21分制 	
		for(int i=0;;i++){
			if(a[i]==1)
				win++;
			else if(a[i]==2){
				lo++;
			}
			else if(a[i]==0){
				cout<<win<<":"<<lo<<endl;
				break;
			}			
		if(win>=21&&win>lo+1||lo>=21&&lo>win+1){
			cout<<win<<":"<<lo<<endl;
			win=0;
			lo=0;
		}
		}		
	return 0;
 } 
