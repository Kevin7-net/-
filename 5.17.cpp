#include<iostream>
using namespace std;

int main()
{
	int i;
	for(i=33;i<127;i++){
		if(i%10==2){
			cout<<char(i)<<endl;
		}
		else{
			cout<<char(i)<<" ";
		}
	}
	return 0;
}
