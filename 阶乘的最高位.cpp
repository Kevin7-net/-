//输入一个正整数n。输出n!的最高位上的数字。
#include<iostream>
using namespace std;

int main()
{
	int n;
	double sum=1;
	cin>>n;
	for(int i=1;i<=n;i++){
		while(sum>100){
			sum = sum /10;
		}
		sum*=i;
		
	}
	while(sum>10){
		sum/=10;
	}
	cout<<(int)sum;
	return 0;
}
//#include<stdio.h>
//#include<math.h>
//int main(){
//	int n;
//	scanf("%d",&n);
//	int i=1;
//	double sum = 1;
//	while(i<=n){
//		while(sum>100){
//			sum = sum /10;
//		}
//		sum = sum *i;		
//		i++;
//	}
//	while(sum>10){
//		sum = sum/10;
//	}
//	printf("%d",(int)sum);
//}
