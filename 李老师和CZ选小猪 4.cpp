#include<iostream>
using namespace std;

long long jc(int a)
{
	long long sum=1;
	for(int i=1;i<=a;i++){
		sum*=i;
	}
	return sum;
}
int main()
{
	long long n,a,b,c;
	cin>>n;
	while(n--){
		cin>>a>>b;
		c=jc(a)/jc(b)/jc(a-b);
		cout<<c<<endl;
	}
	return 0;
}
