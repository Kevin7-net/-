#include<stdio.h>
int HmsToS(int h, int m, int s);
void PrintTime(int s);

int main()
{
	int a,b,c,d,e,f,x,y,z;
	while(scanf("%d:%d:%d %d:%d:%d",&a,&b,&c,&d,&e,&f)!=EOF){
		int m=HmsToS(a,b,c);
		int n=HmsToS(d,e,f);
		int s=n-m;
		PrintTime(s);
	}
	
 } 
 int HmsToS(int h, int m, int s) {
 	int i=h*3600+m*60+s;
 	return i;
 }
 void PrintTime(int s){
// 	int h=s/3600;
// 	int m=(s-h*3600)/60;
// 	int s=s-m*60-h*3600;
 	int h=s/3600;
    int m=s%3600/60;
    int i=s%3600%60;
    printf("%02d:%02d:%02d\n",h,m,i);
 }
