#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	long n,sum=1;
	cin>>n;
	for(int i=1;i<=n;i++){
		sum*=i;
		cout<<setiosflags(ios::left)<<setw(4)<<i<<sum<<endl;
	}
	return 0;
}   
