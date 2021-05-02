#include<iostream>
using namespace std;

struct st{
	string s;
	int age;
	double pt;
}a[1000];
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i].s>>a[i].age>>a[i].pt;
		a[i].age+=1;
		if(a[i].pt*1.2>600){
			a[i].pt=600;
		}
		else{
			a[i].pt*=1.2;
		}
	}	
	for(int i=0;i<n;i++){
		cout<<a[i].s<<" "<<a[i].age<<" "<<a[i].pt<<endl;
	}
	return 0;
 } 
