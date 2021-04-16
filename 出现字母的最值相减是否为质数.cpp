#include<iostream>
using namespace std;

int prime(int n)
{
	if(n<2){
		return 0;
	}
	else{
		for(int i=2;i<n;i++){
			if(n%i==0){
				return 0;
			}
		}
		return 1;
	}
}
int main()
{
	string s;
	int a[200]={0},max=0,min=110;
	cin>>s;
	int len=s.size();
	for(int i=0;i<len;i++){
		a[s[i]-'a']++;	//'a'为a[0] 往后以此类推 
	}
	for(int i=0;i<26;i++){
		if(a[i]>max)
		max=a[i];
		if(a[i]>0&&a[i]<min)
		min=a[i];
	}
//	cout<<max<<endl<<min<<endl;
	int m=max-min; 
	if(prime(m)){
		cout<<"Lucky Word"<<endl<<m;
	}
	else{
		cout<<"No Answer"<<endl<<"0";
	}
 	return 0;
 } 
