#include<iostream>
using namespace std;
int common(int x,int y);

int common(int x,int y)
{
	if(x==y){
		return x;
	}
	else if(x>y){
		common(x/2,y);
	}
	else{
		common(x,y/2);
	}
}
int main()
{
	int x,y,z;
	cin>>x>>y;
	z=common(x,y);
	cout<<z;
	return 0;
}
