//这个题无非只有四种排列情况VK KV KK VV
//其中，VK是符合要求的，KK和VV都能改一个字符成为VK，只有KV不可以改
//先从头到尾跑一遍，把正确的VK都改为X
//再跑一遍找到一个KK 或 VV就停 找到就跳出循环，因为至多改变一个 
#include<iostream>
using namespace std;

int main()
{
	string s;
	int n,sum=0;
	cin>>n;
	cin>>s;
	for(int i=0;i<n-1;i++){
		if(s[i]=='V'&&s[i+1]=='K'){
			sum++;
			s[i]='v';
			s[i+1]='k';
		}		
	}
	for(int i=0;i<n-1;i++){
		if(s[i]==s[i+1]){
			sum++;
			break;
		}
	}
	cout<<sum;
	return 0;
}
