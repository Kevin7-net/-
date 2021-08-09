#include<iostream>
#include<cmath>
using namespace std;

int zh(int n)
{
	int s;
	if (n > 4)
		s=n-1;
	else
		s = n;
	return s;
}
//由题可知，跳过了数字4，所以里程表显示的是九进制的数，只需将九进制化为十进制就可以解出。
int main()
{
	int num,k=0,n,a,cnt=0;
	cin >> num;
	n = num;
	while (n > 0) {
		a = n % 10;
		n /= 10;
		a = zh(a);
		cnt += a*pow(9, k++);
	}
	cout << cnt;
	return 0;
}
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int num,cnt=0;
//	cin >> num;
//	for (int i = 1; i <= num; i++) {
//		if (i % 10 != 4 && i / 10 % 10 != 4 && i / 100 % 10 != 4) {
//			cnt++;
//		}
//	}
//	cout << cnt;
//	return 0;
//}	
