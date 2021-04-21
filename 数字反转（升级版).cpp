#include<iostream>
using namespace std;

int main()
{
	int m=1,a=0;
	string s;
	char c;  //记录符号是什么 
	cin>>s;
	int len=s.size();  //长度为len 
	for(int i=0;i<len;i++){
        if(s[i]>='0'&&s[i]<='9') 
		a++;         //记录符号位 
        else         //遇到符号，记录下来，跳出 
        {
            c=s[i];
        	m=0;    //m=0,判断是否有符号出现 
            break;
        } 
    }
	int cnt=a;   //a为符号位 
	cnt--;
	
	while(s[cnt]=='0'&&cnt>0)
	 cnt--;        //去除多余前导0； 
	 
	for(int i=cnt;i>=0;i--)    //输出第一个数 
       cout<<s[i];
       
    if(m==1) 
	return 0;      //无符号return 0 
	
	else if(c=='%') {
	cout<<"%";
	return 0;
	}
	
	if(c=='.')
	cout<<".";
	else if(c=='/')
	cout<<"/";
	
	//从符号位后开始操作
	 
	int b=a+1;      //a为符号位
	int d=len-1;
	while(s[b]=='0'&&b<d)
	 b++;          //去除末尾0 
	 
	while(s[d]=='0'&&d>b)
		d--;      //去除多余前导0

	for(int i=d;i>=b;i--){
		cout<<s[i];
	}
	
	return 0;
 } 
