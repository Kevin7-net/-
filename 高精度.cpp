#include<iostream>
#include<cstring>
using namespace std;
char a1[50001],b1[50001];
int len1,len2,i,x,len,j,c[50001],a[50001],b[50001];
int main ()
{
    cin >>a1 >>b1;//读入两个数
    len1=strlen(a1);
	len2=strlen(b1);		//计算长度
	
    for (i=1;i<=len1;i++)
	a[i]=a1[len1-i]-'0';	//将字符串转换成数字  例如a1=123, a[1]=3,a[2]=2,a[3]=1
	
    for (i=1;i<=len2;i++)	
	b[i]=b1[len2-i]-'0';	//将字符串转换成数字
	
    for (i=1;i<=len1;i++)
		for (j=1;j<=len2;j++)
			c[i+j-1]+=a[i]*b[j];	//按乘法***********
   	 len=len1+len2;                 //原理进行高精乘
    for (i=1;i<len;i++)
		if (c[i]>9){
			c[i+1]+=c[i]/10;
			c[i]%=10;
		}		//进位
    while (c[len]==0&&len>1)
			len--;       //判断位数
    for (i=len;i>=1;i--)
			cout <<c[i]; //输出
    return 0;
}

