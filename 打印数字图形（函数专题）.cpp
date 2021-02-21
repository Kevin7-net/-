#include<iostream>
using namespace std;
void PrintDigit(int m);
void PrintSpace(int m);

void PrintDigit(int m)
{
	for(int i=0;i<m;i++){
		cout<<" ";
	}
}
void PrintSpace(int m)
{
	for(int i=1;i<m;i++){
		cout<<i;
	}
	for(int i=m;i>0;i--){
		cout<<i;
	}
}
int main()
{
	int n,m,a=1;
	cin>>n;
	m=n-1;
	for(int i=1;i<=n;i++){
		PrintDigit(m);
		PrintSpace(i);
		cout<<endl;
		m--;
	}
	for(int i=n-1;i>0;i--){
		PrintDigit(a);
		PrintSpace(i);
		cout<<endl;
		a++;
	}
	return 0;
} 
