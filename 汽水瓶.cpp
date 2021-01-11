#include<iostream>
using namespace std;
int main()
{
	int n,s=0;
	while(s<10&&(cin>>n,n!=0))
	{
		s++;
		int sum=0;
		while(n>=3)
		{	
			int k=n/3; 
			sum+=n/3;
			n%=3;
			n+=k;
		}
		if(n==2)sum+=1;
		cout<<sum<<endl;
	}
	return 0;
}
