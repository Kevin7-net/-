#include<iostream>
using namespace std;

int main()
{
	int arr[]={1,8,9,3,7,4,6,8,5,2};
	int i=0;
	int tmp;
	int m;
	m=sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<m;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	//冒泡排序
	//外边循环次数为数组长度减1，内循环次数为数组长度减排序轮数减1 
	for(i=0;i<m-1;i++){
		for(int j=0;j<m-i-1;j++){
			if(arr[j]>arr[j+1]){
				tmp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;
			}
		}
	} 
	for(i=0;i<m;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
 } 
