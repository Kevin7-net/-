//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//int main()
//{
//	string name[10];
//	int n;
//	int x[10],y[10];
//	int a,b,c,d=0;
//	cin>>n;
//	for(int i=0;i<n;i++){
//		cin>>a>>b>>c>>name[d++];
//		x[i]=a*b*c;
//		y[i]=a*b*c;
//	}
//	sort(x,x+n);
//	for(int i=0;i<n;i++){
//		if(y[i]==x[0]){
//			cout<<name[i]<<" ";
//		}
//	}
//	return 0;
//}
#include<bits/stdc++.h>
using namespace std;
const int N = 9;
struct node
{
    int v;
    string name;
}V[N];
bool cmp(node &a,node &b)
{
    return a.v>b.v;
}
int main()
{
    int n;
    cin>>n;
    for(int i = 0;i<n;i++)
    {
        int a,b,c;
        cin>>a>>b>>c>>V[i].name;
        int v = a*b*c;
        V[i].v=v;
    }
    sort(V,V+n,cmp);
    cout<<V[n-1].name<<endl;
    return 0;
}
½á¹¹ÌåÅÅÐò
