#include<iostream>
using namespace std;

int main()
{
	int a,b,c,m;
	int x[100000];
	cin>>a>>b>>c;
	for(int i=1;i<=a;i++)
		for(int j=1;j<=b;j++)
			for(int k=1;k<=c;k++){
				x[i+j+k]++;
			}
	int max=x[3];
	for(int i=3;i<=a*b*c;i++){
		if(x[i]>max){ 
		max=x[i];
		m=i; 
		} 
	}
	cout<<m;
	return 0;
}
