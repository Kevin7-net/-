//现有N(N≤1000) 名同学参加了期末考试，并且获得了每名同学的信息：
//姓名（不超过 8 个字符的字符串，没有空格）、语文、数学、英语成绩（均为不超过 150 的自然数）。
//总分最高的学生就是最厉害的，
//请输出最厉害的学生各项信息（姓名、各科成绩）。如果有多个总分相同的学生，输出靠前的那位。
#include<iostream>
#include<algorithm>
using namespace std;

struct Student{
	string name;
	int yw;
	int sx;
	int yy;
	int zf;
}a[1000];
int cmp(Student m,Student n)  //注意是Student m,n 
{
	return m.zf>n.zf;  //从大到小排序 
}
int main()
{	
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i].name>>a[i].sx>>a[i].yw>>a[i].yy;
		a[i].zf=a[i].sx+a[i].yw+a[i].yy;
	}
	 sort(a,a+n,cmp);
	 cout<<a[0].name<<" "<<a[0].sx<<" "<<a[0].yw<<" "<<a[0].yy;
	 return 0;
}
