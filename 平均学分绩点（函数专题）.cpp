#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int n,x,c,j,k=0;
	double sum=0,sum1=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x>>c;
		sum1+=x;
		j=c-50;
		k=j/10;
		if(c>=60){
			sum+=x*k;
		}
	}
	cout<<fixed<<setprecision(1)<<sum/sum1;
	return 0;
 } 
