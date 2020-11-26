#include<stdio.h>

int main()
{
	int t,n;
	int i=0,j=0,l=0,k=0;
	scanf("%d",&t);
	n=t;
	if(n>0){
	while(n>0){
		i=n%10;
		j=j*10+i;
		n/=10;
	} 	printf("%d",j);
}

	if(n<0){
		n=-n;
		while(n>0){
		k=n%10;
		l=l*10+k;
		n/=10;
		}
		printf("%d",-l);
	}
	if(t==0){
		printf("%d",t);
	}
	return 0;
}
