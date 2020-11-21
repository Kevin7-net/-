#include<stdio.h>

int main()
{
	int k,i;
	scanf("%d",&k);
	int a[50];
	a[1]=1;
	a[2]=1;
	if(k>=3){
	for(i=3;i<=k;i++){
	a[i]=a[i-1]+a[i-2];	
	}
	printf("%d",a[k]);
}
	else if(k==1||k==2){
		printf("%d",a[k]);
	}

	return 0;
} 
