#include<stdio.h>
int main()
{
    int n,a,b;
    scanf("%d",&n);
    a=n;
    b=1;
    while(a>9)
    {
        a/=10; 
        b*=10; 
    }
    while(b>0) 
    {
        printf("%d ",n/b); 
        n%=b;   
        b/=10;   
    }
    printf("\n");
    return 0;
}
