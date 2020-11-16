#include<stdio.h>

void sum(int begin,int end);

int main()
{
	sum(5,15);
	sum(10,25);
	sum(25,55);
	return 0;
	
 } 
 
 void sum(int begin,int end)
 
 {
 	int i;
 	int sum;
 	for(i=begin;i<=end;i++)
 	{
 		sum+=i;
	 }
	 printf("%d到%d的和是%d\n",begin,end,sum);
 }
