#include<iostream>
using namespace std;
double jc(int a);

int main()
{
	double n;
	cin>>n;
	for(int i=0;i<n;i++){
		if(n>=jc(i)&&n<=jc(i+1)){
			cout<<"m<="<<i<<endl;
			break;
		}
	}
	return 0;
}

double jc(int a)
{
	double sum=0,d=1;
	for(int i=1;i<=a;i++){
		d*=i;
		sum+=d;
	}	
	return sum;
} 
