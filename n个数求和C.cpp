#include<stdio.h>

int main()
{
	int n,sum,x;
	scanf("%d",&n);
	while(n>0){
		scanf("%d",&x);
		sum+=x;
		n--;
	}
	printf("%d",sum);
	return 0;
}
