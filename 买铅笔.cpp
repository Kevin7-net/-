#include<iostream>
using namespace std;

int main()
{
	int n,s[100],j[100],sum[100],min;
	cin>>n;
	for(int i=0;i<3;i++){
		cin>>s[i]>>j[i];
	}
	for(int i=0;i<3;i++){ 
	int num=n/s[i];
	int d=n%s[i];
	if(d!=0){
		num++;
	}
	sum[i]=num*j[i];
	}
	min=sum[0];
	for(int i=0;i<3;i++){
		if(min>sum[i]){
			min=sum[i];
		}
	}
	cout<<min;
	return 0;
}

