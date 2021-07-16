#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

const int N = 505;
int f[N][N];
int w[N][N];
int main(void)
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= i; ++j) cin >> w[i][j];
	}

	for (int i = n; i > 0; --i)
	{
		for (int j = 1; j <= i; ++j)
		{
			f[i][j] = max(f[i+1][j], f[i+1][j + 1]) + w[i][j];
		}
	}

	cout << f[1][1] << endl;
	return 0;
}
