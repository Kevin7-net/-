#include<stdio.h>

int main()
{
	int a,b,c,i,j,k;
	scanf("%d %d %d",&a,&b,&c);
	if(a>=0&&b>=1&&c>=2){
	for(i=c;i>=2;i--){	
		for(j=b;j>=1;j--){		
			for(k=a;k>=0;k--){
				if(k+1==j&&j+1==i){
					printf("%d",i+j+k);
					goto out;
				}
			}
		}
	}
}
	else{
		printf("0");
	}
	out:

	return 0;
 } 
