#include<iostream>
#include<iomanip>
using namespace std;
int getScore(char g);

int main()
{
	char c;
	int i=0,b=0;
	double p,sum=0;
	while((c=getchar())!='\n'){
	i++;
	b=getScore(c);
	sum+=b;
	}
	p=sum/i;
	cout<<fixed<<setprecision(1)<<p;
	return 0;
}
int getScore(char g){
	int a;
	if(g=='A'){
		a=95;
	}
	else if(g=='B'){
		a=85;
	}
	else if(g=='C'){
		a=75;
	}
	else if(g=='D'){
		a=65;
	}
	else if(g=='E'){
		a=40;
	}	
	return a;
}
