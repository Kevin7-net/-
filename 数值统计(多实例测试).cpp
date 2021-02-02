#include<iostream>
using namespace std;

int main()
{
	int n,a=0,b=0,c=0,x=0,y=0;
	double m;
	while(cin>>n,n!=0){
	for(int i=0;i<n;i++){
		cin>>m;
		if(m<0){			
			a++;
		}
		else if(m==0){			
			b++;
		}
		else{			
			c++;
		}		
	}
	cout<<a<<" "<<b<<" "<<c<<endl;
	a=b=c=0;
	}
	
	return 0;
 } 
