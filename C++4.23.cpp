#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char arr[1000];
	cout<<"Enter a SSN: " ;
	cin>>arr;
	int len;
	len=strlen(arr);
	if(len!=11){
		cout<<arr<<" is an invalid social security number"<<endl;
	}
	else{
		bool flag=false;
		for(int i=0;i<len && i!=3 && i!=6;i++){
			if (arr[i]<'0'||arr[i]>'9'){
				flag=true;
			}
		}
			if(arr[3]!='-'||arr[6]!='-'){
				flag=true;
			}
			if(flag){
				cout<<arr<<" is an invalid social security number";
			}
			else{
				cout<<arr<<" is an valid social security number";
			}
		}
		return 0;
}
	

