#include<iostream>
using namespace std;
int main()
{
	int x=0,y=0;//��ʼ��С��λ�ã�0��0�� 
	int commond,time,w=0,n=0;//commandΪ���time��ʱ�� 
	//nΪ������ͷ����0Ϊ����1Ϊ��,2Ϊ�ϣ�3Ϊ��;
	//wΪ��ʱ������¼�ϴε�ʱ�䣬�Դ˼�����ʱ�� 
	while(cin>>time>>commond)//��������ʱ���Լ����� 
	{	
		switch(n)//��nȡģ����ȷ������ 
		{
			case  0: y+=10*(time-w);break;
			case  1: x+=10*(time-w);break;
			case  2: y-=10*(time-w);break;
			case  3: x-=10*(time-w);break;
		}
		if(commond==3)  break;//���������3��ֹͣ 
		else if(commond==1)	n=n-1;  //���������1������ת��n-1  
		else if(commond==2)	n=n+1;	//���������2������ת��n+1 
		n=(n+4)%4;//��4ȡģ�ı䷽��ȷ����Χ0~3 
		w=time;//w��¼�ϴε�ʱ�� 
	}		
	cout<<x<<" "<<y;//���С���ĺ������������ 
	return 0;
}
