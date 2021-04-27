#include<iostream>
#include<iomanip>
#include<algorithm>
using namespace std;

int qvchu(int a[],int len)
{
	sort(a,a+len);
	a[0]=0;
	a[len-1]=0;
}
int main()
{
	int a[20];
	int n;
	double m,sum=0,max=0;
	cin>>n>>m;
	for(int i=0;i<n;i++){    //n´Î 
		sum=0;
		for(int j=0;j<m;j++){
			cin>>a[j];
		}
		qvchu(a,m);    
		for(int j=0;j<m;j++){
			sum+=a[j];
		}
		if(sum>max){
			max=sum;
		} 
	}
	cout<<fixed<<setprecision(2)<<max/(m-2);
	return 0;
}
