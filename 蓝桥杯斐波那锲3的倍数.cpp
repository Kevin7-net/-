#include<iostream>
using namespace std;

int main()
{
	string s1="12200160415121876738";
	string s2="19740274219868223167";
	string s3="31940434634990099905";
	string s4="51680708854858323072";
	string s5="83621143489848422977";
	string s6="135301852344706746049";
	string s7="218922995834555169026";
	string s8="354224848179261915075";
	int sum=0,sum1=0,sum2=0,sum3=0,sum4=0,sum5=0,sum6=0,sum7=0,sum8=0;
//	long long a[101],sum=0;
//	a[1]=1;
//	a[2]=1;
//	for(int i=3;i<=100;i++){
//		a[i]=a[i-1]+a[i-2];
//	}
//	for(int i=1;i<=100;i++){
////		if(a[i]%3==0){
////			sum++;
////			cout<<a[i]<<" ";
////		}
//		cout<<a[i]<<" ";
//	}
	cout<<endl;
	for(int i=0;i<20;i++){
		sum1+=s1[i]-'0';
	}
	cout<<sum1<<endl;
	if(sum1%3==0){
		sum++;
	}
	
	for(int i=0;i<20;i++){
		sum2+=s2[i]-'0';
	}
	cout<<sum2<<endl;
	if(sum2%3==0){
		sum++;
	}
	
	for(int i=0;i<20;i++){
		sum3+=s3[i]-'0';
	}
	cout<<sum3<<endl;
	if(sum3%3==0){
		sum++;
	}
	
	for(int i=0;i<20;i++){
		sum4+=s4[i]-'0';
	}
	cout<<sum4<<endl;
	if(sum4%3==0){
		sum++;
	}
	
	for(int i=0;i<20;i++){
		sum5+=s5[i]-'0';
	}
	cout<<sum5<<endl;
	if(sum5%3==0){
		sum++;
	}
	
	for(int i=0;i<21;i++){
		sum6+=s6[i]-'0';
	}
	cout<<sum6<<endl;
	if(sum6%3==0){
		sum++;
	}
	
	for(int i=0;i<21;i++){
		sum7+=s7[i]-'0';
	}
	cout<<sum7<<endl;
	if(sum7%3==0){
		sum++;
	}
	
	for(int i=0;i<21;i++){
		sum8+=s8[i]-'0';
	}
	cout<<sum8<<endl;
	if(sum8%3==0){
		sum++;
	}
	
	cout<<sum;
	return 0;
} 
