#include<iostream>
using namespace std;
bool isConsecutiveFour(int values[][7]);

int main()
{
	int m,n;
	cin>>m>>n;
	int arr[m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}		
	}
//	isConsecutiveFour(arr[][7]);
	return 0;
}
bool isConsecutiveFour(int values[][7]){
	int min=0;
	int m=sizeof(values)/sizeof(values[0]);
	int n=sizeof(values[0])/sizeof(values[0][0]);
	if(m>=n){
		min=n;
	}
	else{
		min=m;
	}
	bool flag=false;
	//检查行 
	for(int i=0;i<m-4;i++){
		for(int j=0;j<n;j++){
			if(values[i][j]==values[i][j+1]==values[i][j+2]==values[i][j+3]){
				flag=true;
				goto out;
			}
		}
	}
	//检查列
	for(int j=0;j<m;j++){
		for(int i=0;i<n-4;i++){
			if(values[i][j]==values[i+1][j]==values[i+2][j]==values[i+3][j]){
				flag=true;
				goto out;
			}
		}
	}
	//检查对角线 
	for(int i=0;i<min-4;i++){
		if(values[i][i]==values[i+1][i+1]==values[i+2][i+2]==values[i+3][i+3]){
			flag=true;
			goto out;
		}
	}
	for(int i=min;i>4;i--){
		if(values[i][i]==values[i-1][i-1]==values[i-2][i-2]==values[i-3][i-3]){
			flag=true;
			goto out;
		}
	}
	out:
	if(flag){
		cout<<"True";
	}
	else{
		cout<<"False";
	}
}

	
	
	
	
	

