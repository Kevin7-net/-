#include<iostream>
using namespace std;

int bijiao(int a,int b)
{
	if(a==b){
		return 2;
	}
	else if(a==0){
		if(b==1||b==4){
			return 0;
		}
		else if(b==2||b==3){
			return 1;
		}
	}
	else if(a==1){
		if(b==2||b==4){
			return 0;
		}
		else if(b==3||b==0){
			return 1;
		}
	}
	else if(a==2){
		if(b==3||b==0){
			return 0;
		}
		else if(b==4||b==1){
			return 1;
		}
	}
	else if(a==3){
		if(b==1||b==0){
			return 0;
		}
		else if(b==4||b==2){
			return 1;
		}
	}
	else if(a==4){
		if(b==2||b==3){
			return 0;
		}
		else if(b==0||b==1){
			return 1;
		}
	}	
}
int main()
{
	int n,n1,n2,sum1=0,sum2=0;
	int m=1,j=1;
	int a[201],b[201];
	cin>>n>>n1>>n2;
	for(int i=1;i<=n1;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n2;i++){
		cin>>b[i];
	}
	while(n>0){
		if(bijiao(a[m],b[j])==1){
			sum1++;
		}
		else if(bijiao(a[m],b[j])==0){
			sum2++;
		}
		m++;
		j++;
		if(m>n1)
		m=1;
		if(j>n2)
		j=1;		
		n--;
	}
	cout<<sum1<<" "<<sum2;
	return 0;
}
