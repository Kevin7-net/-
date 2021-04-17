#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s,s1;
	string s2;
	int n,d,a,b,m=1;
	cin>>n;
	cin>>s;
	for(int i=0;i<n;i++){	
		cin>>d;
		switch(d){
			case 1:
				cin>>s1;
				s+=s1;
				cout<<s<<endl;
				break;
			case 2:
				cin>>a>>b;
				s2=s.substr(a,b);
				s=s2;
				cout<<s<<endl;
				break;
			case 3:
				cin>>a;
				cin>>s1;
				s.insert(a,s1);
				cout<<s<<endl;
				break;
			case 4:
				cin>>s1;
				if(s.find(s1)<s.size())//找不到会返回一个诡异的数字（反正比字符串长）
				cout<<s.find(s1)<<endl;
				else
				cout<<"-1"<<endl;
			default:
				break;
		}
	}
	return 0;
}
