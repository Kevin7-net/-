#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a[100],len=0;
	for(int i=0;;i++){
		cin>>a[i];
		len++;
		if(a[i]==0){
			break;
		}
	}
	for(int i=len-2;i>=0;i--){
		cout<<a[i]<<" "; 
	}
	return 0;
}
