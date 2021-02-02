#include<iostream>
using namespace std;

int main()
{
	int n,x;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x;
		for(int j=7;j<=x;j++){
			if(j%7==0||j%10==7||j/10%10==7||j/100%10==7||j/1000%10==7){
				cout<<j<<" ";
			}			
		}
		cout<<endl;
	}
	return 0;
 } 
