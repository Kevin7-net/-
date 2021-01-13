#include<stdio.h>
int main()
{
	int i,n,j=1;//定义循环变量i，未知数字n，和阶乘记录数j，记得初始化j=1
	scanf("%d",&n);//键盘输入数字n
    double sum=0;//sum用double防止数据溢出
	for(i=1;;i++)//设置无限循环查找m
	{
		
		j*=i;//阶乘实现
		sum+=j;//将阶乘累加
		if(sum>=n)//当累加新阶乘后>=了n
		{
		printf("m<=%d",i-1);//按照格式输出累加前的数字
		break;//结束循环
		}
	}
	return 0;//程序正常退出
}
