#include<iostream>
using namespace std;
bool isConsecutiveFour(const int values[],int size);

int main()
{
	int n,x;
	int values[100];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>values[i];
	}
	isConsecutiveFour(values,n);
//	cout<<sizeof(values)/sizeof(values[0]); 
}
bool isConsecutiveFour(const int values[],int size){
	for(int i=0;i<size-4;i++){
		if(values[i]==values[i+1]==values[i+3]==values[i+4]){
			cout<<"The list has consecutive fours"<<endl;
		}
		else{
			cout<<"The list has no consecutive fours"<<endl;
		}
	}
}
