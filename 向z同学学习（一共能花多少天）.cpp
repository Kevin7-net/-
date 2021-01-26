#include<iostream>
using namespace std;

int main()
{
	int m,k,day=0,cnt=0;
	cin>>m>>k;
	while(m!=0){
		m--;
		day++;
		cnt++;
		if(cnt==k){
			m++;
			cnt=0;
		}
	}
	cout<<day;
	return 0;
}
