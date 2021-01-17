#include<iostream>
using namespace std;

int main()
{
	int grade;
	cin>>grade;
	grade=grade/10;
	switch(grade){
		case 9: cout<<"A"; break;
		case 8: cout<<"B"; break;
		case 7: cout<<"C"; break;
		case 6: cout<<"D"; break;
		default: cout<<"E"; break;
	}
	return 0;
 } 
