#include<iostream>
using namespace std;

struct ss{
	string name;
}s[100005];
int main()
{
	int n,m,x=1;
	int a[100005],b[100005],c[100005];
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>s[i].name;
	}
	for(int i=1;i<=m;i++){
		cin>>b[i]>>c[i];      //b[i]表示向左数或向右数，c[i]表示数几个 
	}
	int i=1;
	while(i<=m){
		if(b[i]==0){ 	         //b[i]=0表示向左数，1表示向右数 
			if(a[x]==0){         //顺时针（减）  //0表示在朝向圈内，1表示朝向圈外 
				if(x-c[i]<=0){    //x表示位置次序 
					int y=c[i]-x;
					x=n;
					x-=y;
				}
				else{
					x-=c[i];
				}
			}
			else{                //逆时针（加） 
				if(x+c[i]>n){
					int z=x+c[i]-n;
					x=0;
					x+=z;
				}
				else{
					x+=c[i];
				}
			} 
		}    
		else{                  //b[i]=1表示向右数 
			if(a[x]==1){      //顺时针（减）   //朝向圈外
				if(x-c[i]<=0){
					int y=c[i]-x;
					x=n;
					x-=y;
				}
				else{
					x-=c[i];
				}
			}
			else{            //逆时针（加）  
				if(x+c[i]>n){
					int z=x+c[i]-n;
					x=0;
					x+=z;
				}
				else{
					x+=c[i];
				}
			} 
		}
		i++; 
	}
	cout<<s[x].name;
	return 0; 
}
