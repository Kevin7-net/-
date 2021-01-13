#include<iostream>
using namespace std;

int main()
{
	int a,max;
	cin>>a;
	max=a;
	while(a>0){
		cin>>a;
		if(a>max){
			max=a;
		}
	}
	cout<<max;
	return 0;
 } 
