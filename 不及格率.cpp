#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int n,p;
	double sum=0.0;
	double j;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>p;
		if(p<60){
		sum++;
		}
	}
	j=sum/n;
	cout<<fixed<<setprecision(2)<<j;
	return 0;
}
