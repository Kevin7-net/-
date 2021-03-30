#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,k;
	double sum1=0,sum2=0,x=0,y=0;
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		if(i%k==0){
			sum1+=i;
			x++;
		}
		else{ 
		sum2+=i;
		y++;
		} 
	}
	cout<<fixed<<setprecision(1)<<sum1/x<<" "<<sum2/y;
	return 0;
}
