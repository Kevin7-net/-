#include<bits/stdc++.h>
using namespace std;

int a[3];
int main(){
	cin>>a[0]>>a[1]>>a[2];
	sort(a,a+3);//表示排序p数组的[0到2]位置，注意sort默认从小到大排 #include <algorithm>
	cout<<a[0]<<' '<<a[1]<<' '<<a[2];
	return 0;
}
//int A[100];
//bool cmp1(int a,int b)//int为数组数据类型
//{
//return a>b;//降序排列
////return a<b;//默认的升序排列
//}
//sort(A,A+100,cmp1);

