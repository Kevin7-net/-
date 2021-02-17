#include<iostream>
using namespace std;
int fact(int n);

int main()
{
	int m,k;
	cin>>m>>k;
	int M=fact(m);
	int K=fact(k);
	int X=fact(m-k);
	int Y=M/(K*X);
	cout<<Y;
	return 0;
}
int fact(int n){
	int sum=1;
	for(int i=1;i<=n;i++){
		sum*=i;
	}
	return sum;
}
