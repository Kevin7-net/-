#include<iostream>
using namespace std;

int main()
{
	int n,x,m,sum=0;
	cin>>n>>x;
	for(int i=1;i<=n;i++){
		int d=i;
		while(d>0){
			m=d%10;
			d/=10;
			if(m==x)
			sum++;	
		}
	}
	cout<<sum;
	return 0;
}
