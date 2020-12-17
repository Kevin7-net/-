#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	double a;
	cin>>a;
	if(a<0){
		cout<<fixed<<setprecision(2)<<-a;
	}
	else{
	cout<<fixed<<setprecision(2)<<a;
	}
	return 0;
 } 
