#include<stdio.h>
int main()
{
  int i,j,a,n,T,sum;//定义循环变量i，j以及以及组数T和每组数字数n以及数字a
	scanf("%d\n",&T);//键盘输入T 
	for(i=1;i<=T;i++)//循环T次 
	{
		sum=0;//每次重置数字和sum 
		scanf("%d",&n);//键盘输入n 
		for(j=1;j<=n;j++)//循环n次 
		{
			scanf("%d",&a);//键盘输入a 
		    sum+=a;//累加求和 
		}
		printf("%d\n",sum);//输出数字和sum并换行 
	}
	return 0;//程序正常结束
}

