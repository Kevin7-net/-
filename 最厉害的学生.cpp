//����N(N��1000) ��ͬѧ�μ�����ĩ���ԣ����һ����ÿ��ͬѧ����Ϣ��
//������������ 8 ���ַ����ַ�����û�пո񣩡����ġ���ѧ��Ӣ��ɼ�����Ϊ������ 150 ����Ȼ������
//�ܷ���ߵ�ѧ�������������ģ�
//�������������ѧ��������Ϣ�����������Ƴɼ���������ж���ܷ���ͬ��ѧ���������ǰ����λ��
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
int cmp(Student m,Student n)  //ע����Student m,n 
{
	return m.zf>n.zf;  //�Ӵ�С���� 
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
