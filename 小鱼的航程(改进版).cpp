#include<iostream>
using namespace std;

int main()
{
	unsigned long long z,d,sum=0;
	cin>>z>>d;
	for(int i=0;i<d;i++){
		if(z!=6&&z!=7){
			sum+=250;
		}
		if(z==7)
		z=1;
		else
		z++;
	}
	cout<<sum;
	return 0;
}
