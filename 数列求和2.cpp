#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	double n,sum=0.0;
	cin>>n; 
	for(int i=1;i<=n;i++){
		if(i%2==1){
			double j=i;
			sum+=1/(2*j-1);
		}
		else{
			double j=i;
			sum+=-1/(2*j-1);
		}
	}
	cout<<fixed<<setprecision(2)<<sum;
	return 0;
}
