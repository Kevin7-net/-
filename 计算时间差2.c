#include<stdio.h>

int main()

{
	int hour1,minute1;
	
	int hour2,minute2;
	
	scanf("%d %d",&hour1,&minute1);
	scanf("%d %d",&hour2,&minute2);
	
	int x=hour2-hour1;
	int y=minute2-minute1;
	
	if(y<0)
	{
		y=y+60;
		x--;
	}
	printf("ʱ�����%dСʱ%d�֡�",x,y);
	return 0;
}
