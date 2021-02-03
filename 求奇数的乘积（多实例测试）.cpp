#include<iostream>
using namespace std;

int main()
{
	int n,m=1,x;
	while(cin>>n){
		for(int i=0;i<n;i++){
			cin>>x;
			if(x%2!=0){
			m*=x;	
		}
		}
		cout<<m<<endl;
		m=1;
	}
	
	return 0;
}
