#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	double n,m=1.0,z=1.0,sum=0.0;
	cin>>n;
	for(int x=1;x<=n;x++){
		if(x%2==1){
			sum+=z/m;
		}
		else{
			sum+=-z/m;
		}
		z+=1;
		m+=2;
	}
	cout<<fixed<<setprecision(3)<<sum;
	return 0;
}
