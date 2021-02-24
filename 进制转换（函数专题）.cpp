#include<iostream>
using namespace std;
void convert(int n);

void convert(int n)
{
	int a[100],i=0;
	while(n>0){
		a[i]=n%2;
		n/=2;
		i++;
	}
	for(int j=i-1;j>=0;j--){
		cout<<a[j];
	}
}
int main()
{
	int n;
	cin>>n;
	convert(n);
	return 0;
}
