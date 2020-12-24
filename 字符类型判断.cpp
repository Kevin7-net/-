#include<iostream>
using namespace std;

int main()
{
	char n;
	cin>>n;
	if(n>='a'&&n<='z'){
		cout<<"lower";
	}
	else if(n>='A'&&n<='Z'){
		cout<<"upper";
	}
	else if(n>='0'&&n<='9'){
		cout<<"digit";
	}
	else{
		cout<<"other";
	}
	return 0;
}
