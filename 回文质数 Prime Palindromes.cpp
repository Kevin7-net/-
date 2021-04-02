#include<iostream>
#include<cmath>
using namespace std;

int prime(int n) {//�ж����� 
	if(n==1)//����1 
		return 0;
	if(n%2==0)//2�ı����ͻؼҰ� 
		return 0;
	else {//��Ȼ�ͱ���ö�� 
		int i;
		for(i=2; i<=sqrt(n); i++) {
			if(n%i==0)
				return 0;
		}
		return 1;
	}
}
int reverse(int n) {//�ж����ģ�������ο����ַ�ת 
	int sum=0;
	int k=n;
	while(n!=0) {
		sum=sum*10+n%10;
		n/=10;
	}
	if(sum==k)//�ж��Ƿ���� 
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
