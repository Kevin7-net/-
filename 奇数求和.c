#include<stdio.h>

int main()
{
	int a,b;
	int i=0;
	int sum=0;
	scanf("%d %d",&a,&b);
	for(i=a;i<=b;i++){
		if(i%2==1){
			sum+=i;
		}
	}
	printf("%d",sum);
	return 0;
 } 
