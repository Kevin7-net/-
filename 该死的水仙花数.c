	//	水仙花数是指一个N位正整数（N>=3），它的每个位上的数字的N次幂之和等于它本身。例如：153 = 13 + 53+ 33。本题要求编写程序,计算所有N位水仙花数。
	
	//输入格式：
	
	//输入在一行中给出一个正整数N（3<=N<=7）。
	
	//输出格式：
	
	//按递增顺序输出所有N位水仙花数，每个数字占一行。
	
	//输入样例：
	//3
	//输出样例：
	//153
	//370
	//371
	//407
#include<stdio.h>

int main()
{
	int n;
	int i=1;
	int first=1;
	scanf("%d",&n);
	
	while(i<n)
	{
		first*=10;
		i++;
	}
	i=first;
	while(i<first*10)
	{
		int t=i;
		int sum=0;
		do
		{
		int d=t%10;
		t/=10;
		int p=d;
		int j=1;
		while(j<n)
		{
			p*=d;
			j++; 
		 }
		 sum+=p;
	   }while(t>0);
	   	if(i==sum)
	{
		printf("%d\n",i);
	}
	   i++;
	}

	return 0;
}
