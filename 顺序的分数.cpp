#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
class fenshu{
	public:
		double fz;
		double fm;
		double x;
};

bool cmp(fenshu a,fenshu b){
	return a.x<b.x;
}

int check(int a,int b){
	for(;a!=b;)
	{
		int k=b;
		b=a>b-a?a:b-a;
		a=a<k-a?a:k-a;
	}
	return b;
}


int main()
{
	int n;
	cin>>n;
	fenshu fs[13000];
	int k=0;
	for(double i=n;i>1;i--)
	{
		for(double j=i-1;j>0;j--)
		{
			fs[k].fm=i;fs[k].fz=j;
			fs[k].x=j/i;
			k++;
		}
	}
	cout<<"0/1"<<endl;
	sort(fs,fs+k,cmp);
	for(int i=0;i<k;i++)
	{
		if(fs[i].fz==1)
			cout<<fs[i].fz<<"/"<<fs[i].fm<<endl;
		else if(check(int(fs[i].fz),int(fs[i].fm))<=1)
			cout<<fs[i].fz<<"/"<<fs[i].fm<<endl;
	}
	cout<<"1/1"<<endl;
	return 0;
}
