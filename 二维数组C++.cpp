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
	//��ÿ����ά�����е������ 		
	string names[3]={"��","��","��"};
	for(int i=0;i<3;i++){
		int sum=0;
		for(int j=0;j<4;j++){
			sum+=arr[i][j];
		}
		cout<<names[i]<<"���ܷ�Ϊ"<< sum<<endl;
	} 
	return 0;
}
