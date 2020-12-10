#include<iostream>
#include<string>
using namespace std;

int main()
{
	int arr[3][4];
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			cin>>arr[i][j];
		}
	}
	cout<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	//把每个二维数组中的行相加 		
	string names[3]={"张","王","李"};
	for(int i=0;i<3;i++){
		int sum=0;
		for(int j=0;j<4;j++){
			sum+=arr[i][j];
		}
		cout<<names[i]<<"的总分为"<< sum<<endl;
	} 
	return 0;
}
