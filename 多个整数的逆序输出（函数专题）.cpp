#include<iostream>
using namespace std;

void inverse(int n)
{
    int i=0;
    if(n==0)
    return;
    cin>>i;
    inverse(--n);
    cout<<i<<" ";
}
 
int main()
{
    int n;
    cin>>n;
    inverse(n);
}
//#include<stdio.h>
//void inverse(int n)
//{
//   int num;
//    if(n >1)
// 
//   {
//      
//        scanf("%d",&num);//(1) ����һ������������num;
// 
//        inverse(n-1);//(2)  �������n-1�����������: inverse(n-1);  
// 
//        printf("%d",num);
//        printf(" ");//(3)  ���num��
// 
//   }
//if(n==1) //ֱ�����num��   
// {
//    scanf("%d",&num);
//     printf("%d",num);
//     printf(" ");
//}}
// int main()
// {int s;
// scanf("%d",&s);
// inverse(s);
// return 0;
// }
