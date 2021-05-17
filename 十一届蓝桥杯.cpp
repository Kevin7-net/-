//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int sum=10000;
//	cout<<sum/300<<endl;
//	cout<<300*33;
//	return 0;
// } 
//#include<iostream>
//using namespace std;
//
//int pd(int m,int n)
//{
//	if(m%400==0||m%4==0&&m%100!=0){
//		return 1;
//	}
//	return 0;
//}
//int pd2(int n)
//{
//	if(n==1||n==3||n==5||n==7||n==8||n==10||n==12){
//		return 1;
//	}
//	else if(n==2){
//		return 2;
//	}
//	else if(n==4||n==6||n==9||n==11){
//		return 3;
//	}
//}
//int main()
//{
//	long long sum=8;
//	for(int i=8;i<=12;i++){
//		if(pd2(i)==1){
//			sum+=31;
//		}
//		else if(pd2(i)==3){
//			sum+=30;
//		}
//	}
//	for(int i=1921;i<=2020;i++){
//		for(int j=1;j<=12;j++){
//			if(pd(i)){
//			if(j==2){
//				sum+=
//			}
//		}
//		}	
//	}
//}
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	string s;
//	int sum=0;
//	cin>>s;
//	int len=s.length();
//	for(int i=0;i<len;i++){
//		if(s[i+1]==s[i]){
//			sum++;
//		}
//		else{
//			if(sum>0){
//			cout<<s[i]<<sum+1;
//			sum=0;
//			}
//			else{
//			cout<<s[i];
//			sum=0;	
//			}		
//		}
//	}
//	
//	return 0;
//}
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	string s;
//	cin>>s;
//	int len=s.length();
//	for(int i=0;i<len;i++){
//		if(s[i]>='A'&&s[i]<='z'){
//			cout<<s[i];
//		}
//		else if(s[i]>='0'&&s[i]<='9'){
//			for(int j=1;j<s[i]-'0';j++){
//				cout<<s[i-1];
//			}
//		}		
//	}
//	return 0;
//}
#include<iostream>
#include<cmath>
using namespace std;

int pj1(int m,int n)
{
	int a=n;
	int sum=0;
	while(a>0){
		a/=10;
		sum++;
	}
	int c=pow(10,sum);
	return m*c+n;
}
int pj2(int m,int n)
{
	int a=m;
	int sum=0;
	while(a>0){
		a/=10;
		sum++;
	}
	int c=pow(10,sum);
	return n*c+m;
}
int main()
{
	int n,k,sum=0;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n,j!=i;j++){
			int c=pj1(a[i],a[j]);
			int d=pj2(a[i],a[j]);
			if(c%k==0){
				sum++;
			}
			if(d%k==0){
				sum++;
			}
		}
	}
	cout<<sum;
	return 0;
}
