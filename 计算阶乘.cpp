#include<iostream>
using namespace std;
#define LL long long

LL sum=1;
int n;  
void jiecheng(int x)  //ตÝน้ 
{
	sum*=x;
	if(x==n){
		return ;
	}
	jiecheng(x+1);
}
int main()
{
	cin>>n;
	jiecheng(1);
	cout<<sum;
	return 0;
	
}
