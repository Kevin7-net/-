#include<iostream>
using namespace std;

int reverse(int n)
{
	int sum=0;
	while(n>0){
		sum=sum*10+n%10;
		n/=10;
	}
	return sum;
}
int main()
{
	int n;
	cin>>n;
	if(n<0){
		n=-n;
		cout<<-reverse(n);
	}
	else{ 
	cout<<reverse(n);
	} 
	return 0;
 } 
