#include<stdio.h>

int main()
{
	int i,n,x,y;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%*6d%5d",&y);
		printf("6%05d\n",y); 
	}
	return 0;
 } 
