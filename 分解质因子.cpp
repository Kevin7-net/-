#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;	
	int i=2;
	while(n){
		if(n%i==0){
			if(n/i==1){
				cout<<i;
				break;
			}
			else{
			cout<<i<<" ";
			n=n/i;
			i=2;
			}
		}
		else{
		i++;	
	} 

}

	return 0;
}
