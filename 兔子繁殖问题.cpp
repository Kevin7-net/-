#include<iostream>
using namespace std;

//类似前两项和等于下一项 1 1 2 3 5 8 ...... 

int main()
{
	int n,arr[100];
	cin>>n;
	arr[0]=0;
	arr[1]=arr[2]=1;
	for(int i=3;i<=n;i++){
		arr[i]=arr[i-1]+arr[i-2];
	}
	cout<<arr[n]<<endl;
	return 0;
}
