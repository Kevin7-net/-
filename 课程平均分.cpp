#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int m,n;
	double x;
	cin>>m>>n;
	double a[1002][11]={0};
	double b[11];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			b[i]+=a[j][i];	
		}
	}
	for(int i=0;i<n;i++){
		cout<<fixed<<setprecision(2)<<b[i]/m<<" ";
	} 
	return 0;
}
