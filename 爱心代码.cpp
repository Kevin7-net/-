//���Ĵ���
#include<iostream>
using namespace std;

int main()
{ 
	float y=1.5f;
	cout<<endl;
	for(;y > -1.5f;y-= 0.1f) {
	
	float x=-1.5f;
	
	for (;x< 1.5f;x += 0.05f) {
	
	float a=x*x+y*y-1;
	
	cout<<((a *a*a-x*x*y*y*y <= 0.0f)?'*' : ' ');
	}
	cout<<endl;
	}
	return 0;
}
