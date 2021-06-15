#include<iostream>
using namespace std;

int main()
{
	int n,m1,m2;
	cin>>n;
	int a1,a2,a3,b1,b2,b3,c1,c2,c3;
	for(int i=0;i<n;i++){
		cin>>a1>>a2>>a3>>b1>>b2>>b3;
		if(a3+b3>60){
			m1=(a3+b3)/60;
			c3=(a3+b3)%60;
			c2=a2+b2+m1;
		}
		else{
			c3=a3+b3;
			c2=a2+b2;
		}
		if(c2>60){
			m2=c2/60;
			c1=a1+b1+m2;
			c2=c2%60;
		}
		else{
			c1=a1+b1;
		}
		cout<<c1<<" "<<c2<<" "<<c3<<endl;
	}
	return 0;
 } 
