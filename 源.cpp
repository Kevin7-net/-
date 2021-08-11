#include<iostream>
using namespace std;

int main()
{
    int m, n;
    int a[101], b[102];
    int i, j;
    int flag = 0;
    cin >> n >> m;

    for (i = 0; i < n; i++)
        cin >> a[i];
    for (j = 0; j < m; j++)
        cin >> b[j];
    for (i = 0; i < n - m + 1; i++)//只需要查找子数组的长度就行了
    {
        for (j = 0; j < m; j++)
        {
            if (a[i + j] != b[j])
                break;
        }
        if (j == m)
        {
            flag = 1;
            break;
        }
    }


    if (flag == 1)
        cout << i;
    else
        cout << "No Answer" << endl;

    return 0;
}