#include<iostream>
using namespace std;

int main()
{
	int m,n,sum1=0,sum2=0;
	cin>>m>>n;
	for(int i=m;i<=n;i++){
		if(i%2==0){
			sum1+=i*i;
		}
		else{
			sum2+=i*i*i;
		}
	}
	cout<<sum1<<" "<<sum2;
	return 0;
}
