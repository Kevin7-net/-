#include<stdio.h>

int main()
{
	int n,a,i,f,g;
	scanf("%d",&n);//234//23
	int j;
	j=n/10;//j=23//j=2
	if(j>10){
	int i=j/10;//i=2
	while(i>0){
			printf("B");
			i--;
		}
		int k=j;
		k=k%10;
		while(k>0){
			printf("S");
			k--;
		}
		int l=j%10;//l=4
		if(l!=0){
		int cnt=1;
		for(a=0;a<=l;a++){
			printf("%d",cnt);
			cnt++;
		}
	}
}
	else if(0<j<10){
		int s=j;//j=2(23)
		while(s>0){  
			printf("S");
			s--;
		}
		int d=n%10;
		int cnt1=1;
		if(d!=0){
		for(f=0;f<d;f++){
			printf("%d",cnt1);
			cnt1++;
			}
		}
	}
	else if(n<10){
		int cnt2=1;
		if(n!=0){
			for(g=0;g<n;g++){
				printf("%d",cnt2);
				cnt2++;
			}
		}
	}
	return 0;
 } 
