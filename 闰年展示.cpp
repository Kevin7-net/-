#include<iostream>
using namespace std;

int run(int a)
{
	if(a%400==0||a%100!=0&&a%4==0){
		return 1;
	}
	else{
		return 0;
	}
}
int main()
{
	int m,n,sum=0;
	cin>>m>>n;
	for(int i=m;i<=n;i++){
		if(run(i)){
			sum++;
		}
	}
	cout<<sum<<endl;
	for(int i=m;i<=n;i++){
		if(run(i)){
			cout<<i<<" ";
		}
	}
	return 0;
}
