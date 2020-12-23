#include<iostream>
using namespace std;

int main()
{
	char n;
	cin>>n;
	if(n>='a'&&n<='z'){
		n-=32;
	}
	
	cout<<n<<endl;
	return 0;
 } 
