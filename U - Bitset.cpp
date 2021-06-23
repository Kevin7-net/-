#include <iostream>
using namespace std;

int main()
{
	int n,i;
	int a[100];
	while(cin>>n){
		i=0;
		while(n>0){
			int d=n%2;
			n/=2;
			a[i++]=d;
		}
		for(int j=i-1;j>=0;j--){
			cout<<a[j];
		}
		cout<<endl;
	}
	return 0;
}
