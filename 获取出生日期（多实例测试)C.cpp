//输入某人的18位身份证号，输出其出生日期。

#include<stdio.h> 
int main() 
{ 
	int y,m,a,n,i; 
	scanf("%d",&n); 
	for(i=1;i<=n;i++) 
	{ 
	scanf("%*6d%4d%2d%2d%*d",&y,&m,&a); //*在scanf中其表示忽略该输入
	printf("%d-%02d-%02d\n",y,m,a); 
	} 
}   
