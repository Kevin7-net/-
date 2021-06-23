#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int n;
	cin>>n;
	double a[22],b[22];
	a[1]=0;
	a[2]=1;
	a[3]=2;
	for(int i=1;i<22;i++){
		b[i]=1;
		for(int j=1;j<=i;j++){
			b[i]*=j;
		}
	}
	for(int i=4;i<22;i++){
		a[i]=(i-1)*(a[i-1]+a[i-2]);	
	}	
	while(n--){
		int m;
		cin>>m;
		cout<<fixed<<setprecision(2)<<a[m]/b[m]*100<<"%"<<endl;
	}
	return 0;
 } 

