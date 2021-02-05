#include<iostream>
#include<cmath>
using namespace std;
int prime(int a);

int main()
{
	int m,n;
	cin>>m>>n;
	for(int i=m;i<=n;i++){
		int y=prime(i);
		if(i==1&&y==1)
        continue;
		if(y){
			cout<<i<<" ";
		}
	}
	return 0;
}

int prime(int a){
	for(int i=2;i<=sqrt(a);i++){//ÖØµãi<=sqrt(a)
		if(a%i==0){
		return 0;
		}
	}
	return 1;
	
}
//#include<stdio.h>
//#include<math.h>
//int prime(int n)
//{
//    for(int i=2;i<=sqrt(n);i++)
//    if(n%i==0) return 0;
//    return 1;
//}
//int main()
//{
//    int m,n,j,y=0;
//    scanf("%d%d",&m,&n);
//    for(j=m;j<=n;j++)
//    {
//        y=prime(j);
//        if(j==1&&y==1)
//        continue;
//        if(y==1)
//        {
//           printf("%d",j);
//           printf(" ");
//        }
//    }
//return 0;
//}
