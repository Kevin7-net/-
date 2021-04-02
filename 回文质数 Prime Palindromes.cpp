#include<iostream>
#include<cmath>
using namespace std;

int prime(int n) {//判定素数 
	if(n==1)//特判1 
		return 0;
	if(n%2==0)//2的倍数就回家吧 
		return 0;
	else {//不然就暴力枚举 
		int i;
		for(i=2; i<=sqrt(n); i++) {
			if(n%i==0)
				return 0;
		}
		return 1;
	}
}
int reverse(int n) {//判定回文，不懂请参考数字反转 
	int sum=0;
	int k=n;
	while(n!=0) {
		sum=sum*10+n%10;
		n/=10;
	}
	if(sum==k)//判断是否回文 
		return 1;
	else
		return 0;
}
int main()
{
	int m,n;
	cin>>m>>n;
	for(int i=m;i<=n;i++){
		if(i==9989900){
			break;
		}
		if(reverse(i)&&prime(i)){
			cout<<i<<endl;
		}
	} 
	return 0;
} 
