#include<iostream>
#include<cmath>
using namespace std;

int a[1050][1050];
void digui(int w,int l,int p)  //lΪ�����꣬pΪ������ 
{
	if(w==2){
		a[l][p]=0;
		return ;
	}
	for(int i=l;i<l+w/2;i++){
		for(int j=p;j<p+w/2;j++){
			a[i][j]=0;  //�����Ϸ�������������
		}
	}
	digui(w/2,l+w/2,p);
	digui(w/2,l+w/2,p+w/2);
	digui(w/2,l,p+w/2);	  //�˴��ǵݹ�ʣ�������������
}
int main()
{
	int n,x=1,y=1,c;
	cin>>n;	
	int m=n;
	c=pow(2,n);
	for(int i=1;i<=c;i++){
		for(int j=1;j<=c;j++){
			a[i][j]=1;
		}
	}
	digui(c,1,1);
	for(int i=1;i<=c;i++){
		for(int j=1;j<c;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<a[i][c]<<endl;      //������˴����Ա��������β�ո�
	}
	return 0;
 } 
