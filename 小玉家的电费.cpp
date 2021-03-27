#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int d;
	double sum=0;
	cin>>d;
	if(d<=150){
		sum=d*0.4463;
	}
	else if(d>=151&&d<=400){
		sum=150*0.4463+(d-150)*0.4663;
	}
	else{
		sum=150*0.4463+250*0.4663+(d-400)*0.5663;
	}
	cout<<fixed<<setprecision(1)<<sum;
	return 0;
 } 
