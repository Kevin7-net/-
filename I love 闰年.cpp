#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	if(n%4==0){
		if(n%100==0&&n%400!=0){
		printf("No");
		}
		else{
		printf("Yes");
	}
	}
	else{
	printf("No"); 
	}
}

