#include<iostream>
using namespace std;

int main()
{
	int a[55],b[55];
	int j=0,k=0;
	for(int i='A';i<='Z';i++){
		a[j++]=i-'A'+1;
	}
	for(int i='a';i<='z';i++){
		b[k++]=-(i-'a'+1);
	}
	int n;
	char c;
	int m;
	cin>>n;
	while(n--){
		cin>>c>>m;
		if(c>='A'&&c<='Z')
		cout<<a[int(c)-'A']+m<<endl;
		else if(c>='a'&&c<='z')
		cout<<b[int(c)-'a']+m<<endl;
	}
	return 0;
 } 
