#include<iostream>
using namespace std;
//��̱�Ʒ�����
//1.��Ϊȱ����һλ4����ÿλ��λȨΪ9
//2.��10����ȡ��ÿһλ��������4��Ҫ��һ��
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
		sum=sum*9+a[j];      //��ס�������Ǳ���Ӹ�λ����λ��
	
	cout<<sum;
	return 0;
}
