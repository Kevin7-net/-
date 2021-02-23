#include<stdio.h>
int fib(int k);
int i=0;

int main(void )
{
    int n;
    scanf("%d", &n);
    printf("%d\n", fib(n));  
    printf("递归调用了%d次",i);
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
//    if(n==1)//递归终止条件
//    {
//        return 1;
//    }
//    sum=n*Leo(n-1);
//    return sum;//返回阶乘的总和
//}
//int main()
//{
//    int num;
//    cin>>num;//输入一个数
//    cout<<Leo(num)<<endl;  //输出该数的阶乘
//    return 0;
//}

