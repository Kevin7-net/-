#include<iostream>
using namespace std;
void sum(int begin,int end);

int main()
{
	sum(5,15);
	sum(10,25);
	sum(25,55);
	return 0;
	
 } 
 
 void sum(int begin,int end)
 
 {
 	int i;
 	int sum=0;
 	for(i=begin;i<=end;i++)
 	{
 		sum+=i;
	 }
	 cout<<begin<<"��"<<end<<"�ĺ�Ϊ"<<sum<<endl; 
 }
