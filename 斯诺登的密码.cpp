#include<iostream>
#include<algorithm>
using namespace std;

string yw[30]={"","one","two","three","four","five","six","seven","eight","nine","ten","elven",
				"twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen",
				"twenty","a","both","another","first","second","third"};
int sz[30]={0,1,4,9,16,25,36,49,64,81,0,21,44,69,96,25,56,89,24,61,0,1,4,1,1,4,9};	
int main()
{
	string s;
	int k=0;
	int a[10];
	for(int i=0;i<6;i++){
		cin>>s;
		for(int j=0;j<26;j++){
			if(s==yw[j]){
				a[++k]=sz[j];
			}
		}
	}
	if(k==0){
		cout<<0;
		return 0;
	}
	sort(a+1,a+1+k);
	for(int i=1;i<=k;i++)
	{
		if(i!=1&&a[i]<10)
		cout<<0;//ฒน0
		cout<<a[i];
	}

	return 0;
 } 
