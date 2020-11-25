#include<stdio.h>

int main()
{
	int a,b;
	char x;
	scanf("%d %d %c",&a,&b,&x);
	if(x=='+'){
		printf("%d",a+b);
	} 
	else if(x=='-'){
		printf("%d",a-b);
	}
	else if(x=='*'){
		printf("%d",a*b);
	}
	else if(x=='/'){
		if(b==0){
			printf("Divided by zero!");
		}
		else{
		printf("%d",a/b);
		}
	}
	else{
		printf("Invalid operator");
	} 
	return 0;
 } 
