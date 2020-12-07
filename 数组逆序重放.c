#include<stdio.h>

int main()
{
	int a[100];
	int b[100];
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		b[i]=a[i];
	}
	for(i=0;i<n;i++){
		a[i]=b[n-i-1];
	}
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
