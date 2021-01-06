#include<math.h>
using namespace std;

int main()
{
    double i ;
    cin >> i;

    int j = 1;
    double sum;
    while (j<=i)
    {
        sum += pow((-1),j+1)/ (2*j-1);
        j = j + 1;
    }
    double answer = 4 * sum;

    cout << answer << endl;

    return 0;
    
}
