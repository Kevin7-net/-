#include<iostream>
using namespace std;

int main()
{
	int n, sum = 0, max = 0, a, m;
	cin >> n;
	while (n--) {
		sum = 0;
		max = 0;
		cin >> m;
		for (int i = 0; i < m; i++) {
			cin >> a;
			sum += a;
			if (max < a) {
				max = a;
			}
		}
		if (max - 1 <= sum - max) {
			cout << "Yes" << endl;
		}
		else {
			cout << "No" << endl;
		}
	}
	return 0;
}