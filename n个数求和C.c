#include<stdio.h>
int main()
{
  int i,j,a,n,T,sum;//����ѭ������i��j�Լ��Լ�����T��ÿ��������n�Լ�����a
	scanf("%d\n",&T);//��������T 
	for(i=1;i<=T;i++)//ѭ��T�� 
	{
		sum=0;//ÿ���������ֺ�sum 
		scanf("%d",&n);//��������n 
		for(j=1;j<=n;j++)//ѭ��n�� 
		{
			scanf("%d",&a);//��������a 
		    sum+=a;//�ۼ���� 
		}
		printf("%d\n",sum);//������ֺ�sum������ 
	}
	return 0;//������������
}

