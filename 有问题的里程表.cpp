#include<iostream>
using namespace std;
//里程表计费问题
//1.因为缺少了一位4，故每位的位权为9
//2.用10求余取出每一位数，大于4的要减一。
int main(){
	int i=0,num,sum=0,temp,a[10],j;
	cin>>num;
	while(num>0){
		temp=num%10;
		a[i]=temp<4?temp:temp-1;
		num=num/10;
		i++;
	}
	for(j=i-1;j>=0;j--)
		sum=sum*9+a[j];      //记住这样求是必须从高位往低位求
	
	cout<<sum;
	return 0;
}
