#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	double s;
	cin>>s;
	if(s<500){
	}
	else if(s>500&&s<1000){
		s=s*0.95;
	}
	else if(s>1000&&s<3000){
		s=s*0.9;
	}
	else if(s>3000&&s<5000){
		s=s*0.85;
	}
	else if(s>5000){
		s=s*0.8;
	}
	cout<<fixed<<setprecision(2)<<s; 
	return 0;
 } 
