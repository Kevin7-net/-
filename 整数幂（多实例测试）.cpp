#include<iostream>
#include<cmath>
using namespace std; 

int main()
{
	int n;
	int x,y,z=1;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x>>y;
		z=1;
		for(int j=1;j<=y;j++){
			z=z*x;
			z=z%1000;
		}
		cout<<z<<endl;
	}
	return 0;
}
