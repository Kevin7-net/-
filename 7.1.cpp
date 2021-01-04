#include<iostream>
using namespace std;

int main()
{
	int arr[100];
	int n;
	cout<<"Enter the number of student: ";
	cin>>n;
	cout<<"Enter "<<n<<" scores: ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int max=arr[0];
	for(int i=0;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	for(int i=0;i<n;i++){
		if(arr[i]>=max-10){
			cout<<"Student "<<i<<" score is "<<arr[i]<<" and grade is A"<<endl;
		}
		else if(arr[i]>=max-20){
			cout<<"Student "<<i<<" score is "<<arr[i]<<" and grade is B"<<endl;
		}
		else if(arr[i]>=max-30){
			cout<<"Student "<<i<<" score is "<<arr[i]<<" and grade is C"<<endl;
		}
		else if(arr[i]>=max-40){
			cout<<"Student "<<i<<" score is "<<arr[i]<<" and grade is D"<<endl;
		}
		else{
			cout<<"Student "<<i<<" score is "<<arr[i]<<" and grade is F"<<endl;
		}
	}
	return 0;
}
