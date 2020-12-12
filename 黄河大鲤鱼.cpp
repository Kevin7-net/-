#include<iostream>
#include<cstring> 
using namespace std;

int main()
{
	char str[50];
	int sum=0;
	int m=1;//³öÑ­»· 
	cin>>str;
	int len;
	len=strlen(str);
	if(str[0]=='>'&&str[1]=='='&&str[len-2]=='*'&&str[len-1]=='>'){

	for(int i=2;i<len-2;i++){
		if(str[i]=='('){
			sum++;
		}
		else{
		cout<<"0";
		m=0;
		break;
		}
	}
	if(m!=0){
	
	if(sum>5){
		cout<<"big"<<endl;
	}
	else{
		cout<<"small"<<endl;
	}
	}
	}
	else if(str[0]=='<'&&str[1]=='*'&&str[len-2]=='='&&str[len-1]=='<'){
		for(int i=2;i<len-2;i++){
		if(str[i]==')'){
			sum++;
		}
		else{
		cout<<"0";
		m=0;
		break;
		}
	}
	if(m!=0){

	if(sum>5){
		cout<<"big"<<endl;
	}
	else{
		cout<<"small"<<endl;
	}
	}	
	}
	else{
		cout<<"0";
	}
	
	
	return 0;
}
