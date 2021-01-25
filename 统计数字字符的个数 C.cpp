#include<stdio.h>
int main()
{
	int num=0;//定义字符统计器num
	char ch;//定义字符ch
	while(scanf("%c",&ch),ch!='\n')//当输入的不是换行符，继续操作
	{
		if(ch>='0'&&'9'>=ch)//如果是数字字符
		num++;//计数器计数		
	}
	printf("%d",num);//输出计数结果
	return 0;//程序正常退出
}
