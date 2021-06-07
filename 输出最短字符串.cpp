#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int n,i;
    char str[1001],min[1001];
    cin>>n;
    getchar();   //******
    gets(str);
    strcpy(min,str);
    for(int i=1;i<n;i++)
    {
        gets(str);
        if(strlen(min)>strlen(str))
            strcpy(min,str);
    }
    cout<<min;
    return 0;
}
