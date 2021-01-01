#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
	int m,n;
	cin>>m>>n; 
	for(int i=m;i<=n;i++){
		double x=log(i);
		cout<<setiosflags(ios::right)<<setw(4)<<fixed<<setprecision(4)<<i<<"  "<<x<<endl;
	}
	return 0;
 } 
    
