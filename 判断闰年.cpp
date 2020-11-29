#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	if(n%4==0){
		if(n%100==0&&n%400!=0){
		printf("N");
		}
		else{
		printf("Y");
	}
	}
	else{
	printf("N"); 
	}
}

