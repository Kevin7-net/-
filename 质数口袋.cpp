#include <iostream>
#include<cmath>
using namespace std;

int prime(int a){
	for(int i=2;i<=sqrt(a);i++){//�ص�i<=sqrt(a)
		if(a%i==0){
		return 0;
		}
	}
	return 1;
	
}
int main()
{
	long long sum = 0;//���������ͣ���ʼ����
	long long n;//����ڴ���С
	long long k = 0;//�������������ʼ��
	long long a[100000];//����
	cin >> n;
	long long x = 2;//Ҫ�жϵ�x��2��ʼ
	if(n == 0 || n == 1)//n==0��n==1Ҫ����
	    {
	    	cout << "0" << endl;
	    	return 0;
		}
	while(sum <= n)//ѭ����ʼ����
	    {
	    	if(x == 2)//��x==2ʱ���У������������
	    	    {
	    	    	sum += x;//sum��ֵ���ϼ�
	    	    	k++; //������kҲҪ+1
	    	    	a[k] = x;//�����2���������a[1]Ϊ��kΪ1��
				}
				else//���x����2
					{
                        if(prime(x)){
                        	sum+=x;
                        	k++;
                        	a[k]=x;
						}				    	
					}
			x++; //ÿ��x��Ҫ��1��ָ��sum < n;
		}
	for(int i = 1;i < k;i++)
    //ǰ����˸�2������������飬������һ������
	    {
	    	cout << a[i] << endl;
		}
	cout << k-1 << endl;//k-1����Ϊsum+=x���ٺ�n�Ƚϵģ�����Ӧ����k-1���� 
	return 0;//��������
}
