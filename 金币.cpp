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
//  	  ���(����>=������)  {cout<<�����;return 0;}
//  	    else
//  	      �����+=i,����++;
