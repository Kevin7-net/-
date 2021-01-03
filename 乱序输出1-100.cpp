#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<math.h>
using namespace std;
int main()
{
    const int N = 100;
    int A[N];
    int tmp;
    int i;
    for ( int i=0; i<100; i++)
    {
        A[i] = i+1;
        cout <<A[i]<<" ";
    }
    cout<<endl;
    srand((int)time(NULL));
    for ( i=0; i<100; i++)
    {
        tmp=rand()%100;
        //cout << tmp << endl;
        int t=A[i];
        A[i]=A[tmp];
        A[tmp]=t;
    }
    for (i=0; i<100; i++)
        cout <<A[i]<<" ";
    cout<<endl;
}
