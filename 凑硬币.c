#include<stdio.h>

int main()
{
	int x;
	scanf("%d",&x);
	int one,two,five;
	for(one=1;one<=x*10;one++)
	   for(two=1;two<=x*10/2;two++)
	      for(five=1;five<=x*10/5;five++){
		  
	      if(one+two*2+five*5==x*10){
	      	printf("%d个一角的和%d个两角的和%d个五角的是%d元\n",one,two,five,x);
		  } 
		} 
		  return 0;
}
