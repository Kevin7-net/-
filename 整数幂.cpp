#include<iostream>
#include <iomanip>
#include<cmath>
using namespace std;
int mi(int a);

int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	mi(a);
	mi(b);
	mi(c);
}
int mi(int a){
	int i=pow(a,1);
	int j=pow(a,2);
	int k=pow(a,3);
	cout << setiosflags(ios::left) << setw(9) <<i; 
	cout << setiosflags(ios::left) << setw(9) <<j;
	cout << setiosflags(ios::left) << setw(9) <<k<<endl;
}
