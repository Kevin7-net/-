#include<stdio.h>
int fib(int k);
int i=0;

int main(void )
{
    int n;
    scanf("%d", &n);
    printf("%d\n", fib(n));  
    printf("�ݹ������%d��",i);
    return 0;
}

int fib(int k)
{
	i++;
    if(k == 1 || k == 2)
        return 1;
    else
        return fib(k-1) + fib(k-2);
}

//#include <iostream>
//using namespace std;
//int Leo(int n)
//{
//    int sum=1;
//    if(n==1)//�ݹ���ֹ����
//    {
//        return 1;
//    }
//    sum=n*Leo(n-1);
//    return sum;//���ؽ׳˵��ܺ�
//}
//int main()
//{
//    int num;
//    cin>>num;//����һ����
//    cout<<Leo(num)<<endl;  //��������Ľ׳�
//    return 0;
//}

