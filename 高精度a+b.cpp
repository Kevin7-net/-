#include<stdio.h>
#include<string>
#include<string.h>
#include<iostream>
using namespace std;

string add(string str1,string str2)
{
    string str;
    int len1=str1.length();
    int len2=str2.length();
    
    if(len1<len2) //前面补0，弄成长度相同
    {
        for(int i=1;i<=len2-len1;i++)
           str1="0"+str1;
    }
    else
    {
        for(int i=1;i<=len1-len2;i++)
           str2="0"+str2;
    }
    len1=str1.length();
    int cf=0;
    int temp;
    for(int i=len1-1;i>=0;i--)
    {
        temp=str1[i]-'0'+str2[i]-'0'+cf;  //cf是进位的数字，如果上次temp是52，那么要把5加到这一位上 
        cf=temp/10;
        temp%=10;
        str=char(temp+'0')+str;
    }
    if(cf!=0)  str=char(cf+'0')+str;      //如果cf不为0，那么要加到最前面 
    return str;
}
int main()
{
    string str1,str2;
    cin>>str1>>str2;
    cout<<add(str1,str2)<<endl;
  
    return 0;
}

