#include<iostream>
using namespace std;

int main()
{
	int m,n,b=1;
	cin>>m>>n;
	while(b!=0){
	b=m%n; 
	m=n;
	n=b;
    }
	cout<<m<<endl;
	return 0;
}
