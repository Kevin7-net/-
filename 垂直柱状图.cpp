#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int ff[26];//定义计数数组
int main()
{
    int i,j,n,maxn=0;
	string a;
    for(i=0;i<4;i++)
    {
        getline(cin,a);  //getline读入
        n=a.length();
        for(j=0;j<n;j++)
		if(a[j]>='A'&&a[j]<='Z')
		ff[a[j]-'A']++;    //统计字符出现次数
    }
    for(i=0;i<26;i++){
    	maxn=max(maxn,ff[i]);     //最多次数（最高柱状图）	
	}
    for(i=maxn;i>0;i--){      
	    for(j=0;j<26;j++)  //对每一横行 
	    if(ff[j]>=i)       //**********如果出现次数多于i,就输出* 
		cout<<"* ";
		else
		cout<<"  ";//模拟，是可以输出的就输出*，否则跳过
	    cout<<endl;
	}//换行
    for(i=0;i<26;i++)
	cout<<char(i+'A')<<" ";   //输出a~z
	return 0;
}
