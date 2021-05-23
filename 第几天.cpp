#include<stdio.h>

int prn(int n)
{
	if(n%400==0||n%4==0&&n%100!=0){
		return 1;
	}
	return 0;
}
int main()
{
	int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int year,mon,day,sum=0;
	scanf("%d-%d-%d",&year,&mon,&day);
	if(prn(year)){
		a[2]=29;
	}
	for(int i=1;i<mon;i++){
		sum+=a[i];
	} 
	sum+=day;
	printf("%d",sum);
	return 0;
}
