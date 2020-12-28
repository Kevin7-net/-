#include<iostream>
using namespace std;
int abs(int a);

int main()
{
	int a,b,c;
	int i,j,k;
	cin>>a>>b>>c;
	i=abs(a);
	j=abs(b);
	k=abs(c); 
	if(i>=j){
		if(i>=k){
			if(i==a){
			cout<<i;
			}
		else{
			cout<<a;
		}
		}
		else if(i<=k){
			if(k==c){
			cout<<k;
			}
			else{
			cout<<c;
			}
		}
	}
	else if(j>=i){
		if(j>=k){
			if(j==b){
			cout<<j;
			}
		else{
			cout<<b;
		}
		}
		else if(j<=k){
			if(k==c){
			cout<<k;
			}
			else{
				cout<<c;
			}
		}
	}
	return 0; 
 } 
 int abs(int a){
 	if(a<0){
 		a=-a;
	 }
	 return a;
 }
