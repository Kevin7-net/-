#include<iostream>
using namespace std;

int main()
{
	int n,x,sum1=0,sum2=0,sum3=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x;
		if(x<0){
			sum1++;
		}
		else if(x==0){
			sum2++;
		}
		else if(x>0){
			sum3++;
		}
	}
	cout<<sum1<<" "<<sum2<<" "<<sum3;
	return 0; 
}
