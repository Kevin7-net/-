#include<stdio.h>
int main()
{
	int num=0;//�����ַ�ͳ����num
	char ch;//�����ַ�ch
	while(scanf("%c",&ch),ch!='\n')//������Ĳ��ǻ��з�����������
	{
		if(ch>='0'&&'9'>=ch)//����������ַ�
		num++;//����������		
	}
	printf("%d",num);//����������
	return 0;//���������˳�
}
