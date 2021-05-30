#include<stdio.h>
#include<string.h>
int main()
{
    char str[200];
    int i,max,len;
    gets(str);
    len=strlen(str);
    max=str[0];
    for(i=0;i<len;i++)
    {
        if(str[i]>max) 
        max=str[i];
    }
    for(i=0;i<len;i++)
    {
        if(str[i]==max)
        printf("%c(max)",str[i]);
        else 
        printf("%c",str[i]);
    }
    return 0;
}

