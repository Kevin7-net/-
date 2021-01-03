#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int bin2Dec(const string& binaryString);

int main()
{
	string x;
	cin>>x;
	bin2Dec(x);
}
int bin2Dec(const string& binaryString){
	int len=binaryString.length();
	int a[100];
	for(int i=0;i<len;i++){	
		a[i]=binaryString[i]-'0';
	}	
	int sum=0;
//	for(int i=0;i<len;i++){
//		cout<<a[i]<<endl;
//	}
	for(int i=0;i<len;i++){
		sum+=a[i]*pow(2,len-i-1);
	}
	cout<<sum;
}
