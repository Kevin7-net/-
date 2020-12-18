#include<stdio.h>

int main()
{
	int a,b,c,d,e,f;
	scanf("%d:%d:%d",&a,&b,&c);
	scanf("%d:%d:%d",&d,&e,&f);
	int i=a*3600+b*60+c;
	int j=d*3600+e*60+f;
	int k=j-i;
	printf("%d",k);
	return 0;
}
