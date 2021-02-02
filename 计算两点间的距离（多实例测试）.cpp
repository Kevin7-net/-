#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
	double a,b,c,d,m,n;
	while(cin>>a>>b>>c>>d){
		m=pow(a-c,2)+pow(b-d,2);
		n=pow(m,0.5);
		cout<<fixed<<setprecision(2)<<n<<endl;
	}
	return 0;
}
