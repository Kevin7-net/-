#include<iostream>
using namespace std;

int main()
{
	int n,m;
	while(cin>>m>>n){
		for(int i=1;i<=n+2;i++){
			for(int j=1;j<=m+2;j++){
				if(i==1||i==n+2){
					if(j==1||j==m+2){
						cout<<"+";
					}
					else{
						cout<<"-";
					}
				}
				else{
					if(j==1||j==m+2){
						cout<<"|";
					}
					else{
						cout<<" ";
					}
				}
			}
			cout<<endl;
		}
		cout<<endl;	
	}
	return 0;
}
