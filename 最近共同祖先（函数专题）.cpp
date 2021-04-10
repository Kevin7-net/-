//#include<iostream>
//using namespace std;
//int common(int x,int y);
//
//int common(int x,int y)
//{
//	if(x==y){
//		return x;
//	}
//	else if(x>y){
//		common(x/2,y);
//	}
//	else{
//		common(x,y/2);
//	}
//}
//int main()
//{
//	int x,y,z;
//	cin>>x>>y;
//	z=common(x,y);
//	cout<<z;
//	return 0;
//}
#include<iostream>
using namespace std;

int common(int x,int y,int z)
{
	if(x==y&&x==z){
		return x;
	}
	else if(x>=y&&x>=z){
		common(x/3,y,z);
	}
	else if(y>=x&&y>=z){
		common(x,y/3,z);
	}
    else if(z>=x&&z>=y){
        common(x,y,z/3);
    }
}
int main()
{
    int n,a[100],b[100],c[100];
    cin>>n; 
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i]>>c[i];
      }
    for(int i=0;i<n;i++){
      	cout<<common(a[i],b[i],c[i])<<endl;
	}
    return 0;
}
