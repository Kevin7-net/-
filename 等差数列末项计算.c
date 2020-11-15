#include<stdio.h>

int main()
{
	int a1,a2,n,x;
	int d;
	scanf("%d %d %d",&a1,&a2,&n);
	d=a2-a1;
	x=a1+(n-1)*d;
	printf("%d",x);
	return 0;
 } 
