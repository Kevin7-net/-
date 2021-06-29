#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;

char a[]="0123456789ABCDEF";
int zh1(char a[])
{
	int sum=0,j=0,x=0;
	if(a[0]=='-'){
		a[0]='0';
		x=1;
	}
	else if(a[0]=='+'){
		a[0]='0';
	}
	int len=strlen(a);
	for(int i=len-1;i>=0;i--){
		if(a[i]>='A'&&a[i]<='F')
		sum+=(a[i]-'A'+10)*pow(16,j++);
		else
		sum+=(a[i]-'0')*pow(16,j++);
	}
	if(x)
	return -sum;
	return sum;
}
string zh2(int x)
{
	char y[16],z[16];
	int i=0,k=0;
	if(x<0)
	x=-x;
	while(x>0){
		int d=x%16;
		x/=16;
		y[i++]=a[d];
	}
	for(int j=i-1;j>=0;j--){
		z[k++]=y[j];
	}
	return z;
}
int main()
{
	char m[16],n[16];
	while(cin>>m>>n){
		if(m[0]=='0'&&n[0]=='0')
		cout<<"0"<<endl;
		else{
			int b=zh1(m);
		int c=zh1(n);
		if(b+c<0){
			cout<<"-"<<zh2(b+c)<<endl;
		}
		else{
			cout<<zh2(b+c)<<endl;
		}
	}
	} 
	return 0;
}
