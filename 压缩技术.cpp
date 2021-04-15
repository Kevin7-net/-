#include<iostream>
using namespace std;

int main()
{
	int n,s=0,i=0,t=0,a;
	cin>>n;
	while(s<n*n){
		cin>>a;
		i++;
	   for(int b=a;b>0;b--){
		if(t==n){
			cout<<endl;
			t=0;
		}
		if(i%2==1){
			cout<<"0";
		}
		else{
			cout<<"1";
		}
		t++;
		s++;
	}
	}
	return 0;
}
