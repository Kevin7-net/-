#include<iostream>
using namespace std;

void convert(int n, char str[])
{
	int i=0;
	while(n>0){
		str[i]=n%2+'0';
		n/=2;
		i++;
	}
	for(int j=i-1;j>=0;j--){
		cout<<str[j];
	}
}
int main()
{
	int n;
	char c[100]={0};
	cin>>n;
	if(n==0){
		cout<<"0";
		return 0;
	}
	convert(n,c);
	return 0;
} 
