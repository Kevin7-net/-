#include<bits/stdc++.h>
using namespace std;

int a[3];
int main(){
	cin>>a[0]>>a[1]>>a[2];
	sort(a,a+3);//��ʾ����p�����[0��2]λ�ã�ע��sortĬ�ϴ�С������ #include <algorithm>
	cout<<a[0]<<' '<<a[1]<<' '<<a[2];
	return 0;
}
//int A[100];
//bool cmp1(int a,int b)//intΪ������������
//{
//return a>b;//��������
////return a<b;//Ĭ�ϵ���������
//}
//sort(A,A+100,cmp1);

