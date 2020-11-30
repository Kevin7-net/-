#include<stdio.h>

int main()

{
	int a,n;
	scanf("%d %d",&a,&n);
	
	int i;
	int sum=0;
	int t=0;
	
	for(i=1;i<=n;i++)
	{
		t=t*10+a;
		sum+=t;
	}
	printf("%d",sum);
	return 0;
 } 
