#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m=1;
	cin>>n;	
	while(n>0){
	for(int j=0;j<n;j++){ 
	printf("%.02d",m);	//*******
	m++;
	}
	cout<<endl;
	n--;		
	}
	return 0;
}
