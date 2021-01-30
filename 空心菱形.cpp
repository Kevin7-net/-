#include<iostream>
using namespace std;

int main()
{
	int n,a=1,b=1;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n+i-1;j++){
			if(j==n+i-1||j==n+1-i)
			cout<<"*";
			else
			cout<<" ";
		}
		cout<<endl;
		}
	for(int i=1;i<n;i++){
		for(int j=1;j<=2*n-i-1;j++){
			if(j==i+1||j==2*n-i-1)
			cout<<"*";
			else
			cout<<" ";
		}
		cout<<endl;
	}
	return 0;
 } 
//#include<stdio.h>
//int main()
//{
//   int n,i,j;
//   scanf("%d",&n);//看成一个矩形
//   for(i=1;i<=n;i++)
//   {
//      for(j=1;j<=n+i-1;j++)
//      if(j==n+1-i||j==n+i-1)
//      printf("*");
//      else printf(" ");
//      printf("\n");
//   }
//      for(i=1;i<n;i++)
//      {
//         for(j=1;j<=2*n-i-1;j++)
//         if(j==i+1||j==2*n-i-1)
//         printf("*");
//         else printf(" ");
//         printf("\n");
//      }
//   return 0;
//}
