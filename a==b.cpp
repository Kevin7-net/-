#include<iostream>
#include<cstring>
using namespace std;

char a[10000],b[10000];
//int search(char a[])
//{
//	for(int i=0;a[i]!=0;i++){
//		if(a[i]=='.'){
//			return 1;
//		}
//	}
//	return 0;
//}
//void ff(char a[])
//{
//	if(search){
//		int len=strlen(a);
//		int i=len-1;
//		while(a[i]=='0'){
//			a[i]=0;
//			i--;			
//		}
//		if(a[i]=='.'){
//			a[i]=0;
//			i--;
//		}
//	}	
//}
//int main()
//{
//	while(cin>>a>>b){
//		ff(a),ff(b);
//		if(strcmp(a,b)==0){
//			cout<<"YES"<<endl;
//		}
//		else{
//			cout<<"NO"<<endl;
//		}
//	}
//	return 0;
//}
int search(char x[])//先找有没有小数点
{
 for(int i=0;x[i]!=0;++i)
 {
  if(x[i]=='.')//如果有小数点
  {
   return 1;
  }
 }
 return 0;
}
 
void fun(char x[])
{
 if(search(x))
 {
  int lenx=strlen(x);
  int i=lenx-1;
  while(x[i]=='0')//去掉后缀零
     {
         x[i]=0;
         --i;
     }
     if(x[i]=='.')//如果小数点后都是零，也去掉小数点
     {
         x[i]=0;
         --i;
     }
 }
}
void slove()
{
    fun(a);fun(b);//处理两个字符串...
    if(strcmp(a,b)==0)//处理之后比较是否相等
    {
        printf("YES\n");
        return;
    }
    printf("NO\n");
}
int main()
{
    while(~scanf("%s%s",&a,&b))
    {
        slove();
    }
    return 0;
}
