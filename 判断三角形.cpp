#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n;
	double a,b,c;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>b>>c;
	if(a==0&&b==0&&c==0)
		cout<<"NO"<<endl;	
	else if(a+b>c&&a+c>b&&b+c>a){
		cout<<"YES"<<endl;
	}
	else
	cout<<"NO"<<endl;
}
	return 0;
}
