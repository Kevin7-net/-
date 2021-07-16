#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int main()
{
	double a[100],b[100],c[100],d[100],e[100],f[100];
	int m,n;
	cin>>m>>n;
	for(int i=0;i<m;i++){
		cin>>a[i]>>b[i];
	}
	for(int i=0;i<n;i++){
		cin>>c[i]>>d[i];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			e[j]=pow(a[j]-c[i],2)+pow(b[j]-d[i],2);
			f[j]=pow(a[j]-c[i],2)+pow(b[j]-d[i],2);
			}			
		sort(e,e+m);
		for(int k=0;k<m;k++){
			if(f[k]==e[0]){
				cout<<k+1;
				break;
			}
		}
		cout<<endl;
	}
	return 0;
}
