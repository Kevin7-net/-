#include<iostream>
#include<cstring>
#include<cstdio>
#include<algorithm>
using namespace std;
 
int n;
int res=0;
 
int main(){
    cin>>n;
    getchar();
    while(n--){
        string str;
        getline(cin,str);
        if(str.find("@wyk")!=-1) res++;
    }
    cout<<res;
}
