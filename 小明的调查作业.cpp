#include<iostream>
using namespace std;

int main()
{
    int n,i,j,p[1001],t[1001],k=0;  
    cin>>n;  
    
    for(i = 0; i < n; ++i)
	{  
    cin>>p[i];  
	}
	
    for(i = 0; i < n; ++i)  
    {  
        for(j = i + 1; j < n; ++j)  
        {  
            if(p[i] == p[j])  
            p[j] = 0;  
        }  
    }  
    for(i = 0; i < n; ++i)  
    {  
        int k = i;  
        for(j = i+1; j < n; j++)  
        if(p[k] > p[j])  
        k = j;  
//        if(k != i)  
//        {  
            int t = p[i];  
            p[i] = p[k];  
            p[k] = t;  
//        }  
    }  
    int sign = 0;  
    for(i = 0; i < n; ++i)  
    if(p[i] != 0)  
    sign++;  
    cout<<sign<<endl; 
     
    for(i = 0; i < n; ++i)  
    if(p[i] != 0){
    t[++k]=p[i];    
    }  
     
    for(i = 1; i <sign; ++i)
    cout<<t[i]<<" ";
    cout<<t[sign];
}
