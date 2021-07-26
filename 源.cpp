#include<iostream>
#include<algorithm>
using namespace std;

int a[100000];

int cmp(int a,int b){
	return a > b;
}
int main()
{
	int i;
	long long n, h,sum=0;
	cin >> n >> h;
	for (i = 0; i < n; i++) {
		cin >> a[i];
	}
	sort(a, a + n, cmp);
	for (i = 0; i < n; i++) {
		sum += a[i];
		if (sum >= h)
			break;
	}
	cout << i+1 << endl;
	return 0;
}