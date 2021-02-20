#include<iostream>
using namespace std;
int facsum(int n);

int facsum(int n)
{
	int sum=0;
	for(int i=1;i<n;i++){
		if(n%i==0){
			sum+=i;
		}
	}
	return sum;
} 
int main()
{
	int m,n,t,x=0;
	cin>>m>>n;
	for(int i=m;i<=n;i++){
		t=facsum(i);
		if(facsum(t)==i){
			if(i<t){
				cout<<i<<" "<<t<<endl;
				x=1;
			}	
		}
	}
	if(x==0){
		cout<<"No answer";
	}
	return 0;
}
