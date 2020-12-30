#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	double n,i;
	double sum=0;
	cin>>n;
	for(i=1;i<=n;i++){
		sum+=1/(2*i-1);
	}
	cout<<fixed<<setprecision(2)<<sum;
	return 0;
}
