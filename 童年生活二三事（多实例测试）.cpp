//Redraiment小时候走路喜欢蹦蹦跳跳，他最喜欢在楼梯上跳来跳去。 
//但年幼的他一次只能走上一阶或者一下子蹦上两阶。 现在一共有N阶台阶，
//请你计算一下Redraiment从第0阶到第N阶共有几种走法。
#include<iostream>
using namespace std;

int main()
{
	int a[41],i,n;
	a[1]=1;
	a[2]=2;
	for(i=3;i<=40;i++){
		a[i]=a[i-1]+a[i-2];
	}
	while(cin>>n,n!=0){
		cout<<a[n]<<endl;
	} 
	return 0;
 } 
