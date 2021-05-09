#include<iostream>
using namespace std;

int IsUpperTriMatrix(int a[][11], int n)
{
	int m=1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<i;j++){
			if(a[i][j]!=0){
				return 0;
			}
		}
	}
	return 1;
}
int main()
{
	int a[11][11];
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}	
	if((IsUpperTriMatrix(a,n))){
		cout<<"YES";
	}
	else {
		cout<<"NO";
	}
	return 0;
}
