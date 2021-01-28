#include<iostream>
using namespace std;

int main()
{
	int k;
	double sum=0;
	cin>>k;
	for(double i=1;;i++){
		sum+=1/i;
		if(sum>k){
			cout<<i;
			break;
		}
	}
	return 0;
}
