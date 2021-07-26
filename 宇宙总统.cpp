#include<iostream>
#include<algorithm>
using namespace std;
#define f(i,m,n) for(int i=m;i<=n;i++)

struct node{
	string x;
	int num;
	int xlen;
}s[101];
bool cmp(node a,node b)
{
	if(a.xlen>b.xlen)
	return 1;
	else if(a.xlen==b.xlen&&a.x>b.x)
	return 1;
	else
	return 0;
}
int main()
{
	int n,i;
	cin>>n;
	f(i,1,n){
		cin>>s[i].x;
		s[i].num=i;
		s[i].xlen=s[i].x.size();
	}
	sort(s+1,s+n+1,cmp);
	cout<<s[1].num<<endl<<s[1].x;
	return 0;
 } 
