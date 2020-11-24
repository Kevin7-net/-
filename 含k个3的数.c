#include<stdio.h>

int main()
{
	int a,k;
	int cnt=0,m=0,n=0;
	scanf("%d %d",&a,&k);
	if(a%19==0){
		m=1;
	}
	int t;
	while(a>0){
		t=a%10;
		if(t==3){
			cnt++;
		}
		a/=10;
	}
	if(cnt==k&&m==1){
		printf("YSE");
	}
	else{
		printf("NO");
	}
	return 0;
 } 
