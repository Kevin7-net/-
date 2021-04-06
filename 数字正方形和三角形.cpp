#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m=1;
	cin>>n;
	for(int i=0;i<n;i++){ 
	for(int j=0;j<n;j++){	
		printf("%.02d",m);	//*******
		m++; 
		}
	cout<<endl;
	} 
	cout<<endl;
	
//  三角形 
	int cnt = 1;
    for(int i = 1; i <= n; i ++) {
    for(int j = 1; j <= n - i; j ++) {  
		printf("  ");   			//先将空格打出来 
	}
    while(cnt <= i * (i + 1) / 2) {
//	if(cnt < 10) { 
//		printf("0%d", cnt); 
//	}
//    else {
//	   printf("%d", cnt);
//	}
	  printf("%.02d",cnt);
      cnt ++;
    }
    printf("\n");
  }
	return 0;
}
