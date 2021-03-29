#include<iostream>
using namespace std;

int main()
{
	int a[100],x,sum=0;
	for(int i=0;i<10;i++){
		cin>>a[i];
	}
	cin>>x;
	int y=x+30;
	for(int i=0;i<10;i++){
		if(a[i]<=y){
			sum+=1;
		}
	}
	cout<<sum;
	return 0;
 } 
