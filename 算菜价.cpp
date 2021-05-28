#include<stdio.h> 
int main() 
{ 
//	char c; 
	double a,b,sum=0; 
	while( scanf("%*s%lf%lf", &a,&b) != EOF ) //while(scanf("%s %lf %lf",&c,&a,&b)!=EOF)
	{            // %*s 
		sum+=a*b; 
	} 
	printf("%.1lf\n",sum); 
	return 0; 
}

