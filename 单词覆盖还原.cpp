#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int main(){
	string x;
	int b=0,g=0; 
    cin>>x;
    for(int i=0;i<x.length();i++){
   	//boy
   	if(x[i]=='b')
	   b++;
   	if(x[i]=='o'&&x[i-1]!='b')
	   b++;
   	if(x[i]=='y'&&x[i-1]!='o')
	   b++;
   	//girl
   	if(x[i]=='g')
	   g++;
   	if(x[i]=='i'&&x[i-1]!='g')
	   g++;
   	if(x[i]=='r'&&x[i-1]!='i')
	   g++;
   	if(x[i]=='l'&&x[i-1]!='r')
	   g++;
   }
   cout<<b<<endl<<g<<endl;
   return 0;
}
