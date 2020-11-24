#include<stdio.h>

int main()

{
	int i;
	
	scanf("%d",&i);
	
	int a=i / 100;
	
	int b=i % 100 / 10;
	
	int c=i % 100 % 10;
	
	i = a + b*10 + c*100;
	
	printf("%d",i);
	
	return 0;
}
	
	

