#include<iostream>
#include<cstring>
using namespace std;
char a1[50001],b1[50001];
int len1,len2,i,x,len,j,c[50001],a[50001],b[50001];
int main ()
{
    cin >>a1 >>b1;//����������
    len1=strlen(a1);
	len2=strlen(b1);		//���㳤��
	
    for (i=1;i<=len1;i++)
	a[i]=a1[len1-i]-'0';	//���ַ���ת��������  ����a1=123, a[1]=3,a[2]=2,a[3]=1
	
    for (i=1;i<=len2;i++)	
	b[i]=b1[len2-i]-'0';	//���ַ���ת��������
	
    for (i=1;i<=len1;i++)
		for (j=1;j<=len2;j++)
			c[i+j-1]+=a[i]*b[j];	//���˷�***********
   	 len=len1+len2;                 //ԭ����и߾���
    for (i=1;i<len;i++)
		if (c[i]>9){
			c[i+1]+=c[i]/10;
			c[i]%=10;
		}		//��λ
    while (c[len]==0&&len>1)
			len--;       //�ж�λ��
    for (i=len;i>=1;i--)
			cout <<c[i]; //���
    return 0;
}

