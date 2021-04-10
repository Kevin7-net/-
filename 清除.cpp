#include<iostream>
using namespace std;

int main()
{
    int a[100];
    long long n,k,sum=0;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>a[i];
    } 
    for(int i=0;i<n;i++){
        if(a[i]==k){
            sum++;
        }
    }
    if(sum==0){
        for(int i=0;i<n-1;i++){
        cout<<a[i]<<" ";
    }
    cout<<a[n-1];
    }
    else if(sum>1){
        for(int i=0;i<n;i++){
            if(a[i]>0){
                a[i]-=1;
            }           
        }
       for(int i=0;i<n-1;i++){
        cout<<a[i]<<" ";
    }
    cout<<a[n-1];
    }
    else if(sum==1){
        for(int i=0;i<n;i++){
            a[i]=0;
        }
        for(int i=0;i<n-1;i++){
        cout<<a[i]<<" ";
    }
    cout<<a[n-1];
    }
    return 0;
}
