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
//        scanf("%d",&num);//(1) 读入一个整数，存入num;
// 
//        inverse(n-1);//(2)  将后面的n-1个数逆序输出: inverse(n-1);  
// 
//        printf("%d",num);
//        printf(" ");//(3)  输出num；
// 
//   }
//if(n==1) //直接输出num；   
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
