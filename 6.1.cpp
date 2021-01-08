#include<iostream>
using namespace std;
int getPentagonalNumber(int n);

int getPentagonalNumber(int n)
{
	int j=1;
    double num=1;
	while(j<=n)
	{
		num=j*(3*j-1)/2;
		j++;
		cout<<num<<" ";
		if(j%11==0)
	    cout<<endl;
	}

	return num; 
}

int main()
{
	int n=100;
	getPentagonalNumber(n);

	return 0;
}
