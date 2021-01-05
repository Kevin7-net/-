#include<iostream>
using namespace std;

int main()
{
	int n,sum=1;
	cin>>n;
	for(int i=2;i<=n;i++){
		sum*=i;
		while(sum%10==0){
			sum/=10;
		}
		sum=sum%100000;
	}
//	while(sum%10==0){
//		sum/=10;
//	}
	cout<<sum%10;
	return 0;
}
