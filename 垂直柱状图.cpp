#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int ff[26];//�����������
int main()
{
    int i,j,n,maxn=0;
	string a;
    for(i=0;i<4;i++)
    {
        getline(cin,a);  //getline����
        n=a.length();
        for(j=0;j<n;j++)
		if(a[j]>='A'&&a[j]<='Z')
		ff[a[j]-'A']++;    //ͳ���ַ����ִ���
    }
    for(i=0;i<26;i++){
    	maxn=max(maxn,ff[i]);     //�������������״ͼ��	
	}
    for(i=maxn;i>0;i--){      
	    for(j=0;j<26;j++)  //��ÿһ���� 
	    if(ff[j]>=i)       //**********������ִ�������i,�����* 
		cout<<"* ";
		else
		cout<<"  ";//ģ�⣬�ǿ�������ľ����*����������
	    cout<<endl;
	}//����
    for(i=0;i<26;i++)
	cout<<char(i+'A')<<" ";   //���a~z
	return 0;
}
