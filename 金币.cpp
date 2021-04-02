#include<iostream>
using namespace std;

int main()
{
	int k,sum=0,x=1;
	int i=1;
	cin>>k;
	while(k-i>=0){				
		sum+=i*i;		
		k-=i++;			//********
	}
	cout<<sum+k*i;
	return 0;
}



//      for(int i=1;;i++)
//  	for(int j=1;j<=i;j++)
//  	  如果(天数>=总天数)  {cout<<金币数;return 0;}
//  	    else
//  	      金币数+=i,天数++;
