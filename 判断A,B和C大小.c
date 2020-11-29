#include<stdio.h>

int main()
{
	int n,i;
	int a,b,c,d;
	int e=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d %d",&a,&b,&c);
		e++;
		d=a+b;
		if(d>c){
			printf("Case #%d: true\n",e);
		}
		else{
			printf("Case #%d: false\n",e);
		}
	}
	return 0;
}
