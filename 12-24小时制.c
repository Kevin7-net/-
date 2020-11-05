#include<stdio.h>

int main()

{
	int x,y;
	
	scanf("%d %d",&x,&y);
	
	if(x>12)
	
	printf("%d:%d PM",x-12,y);

    else if(x==12)

    printf("%d:%d PM",x,y);

	else
	
	printf("%d:%d AM",x,y);
	
	return 0;
}
