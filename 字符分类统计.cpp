#include<stdio.h>

int main()
{
	char c;
	int let=0,dig=0,other=0;
	while(scanf("%c",&c),c!='\n'){
		if(c>='0'&&c<='9'){
			dig++;
		}
		else if((c>='A'&&c<='Z')||(c>='a'&&c<='z')){
			let++;
		}
		else{
			other++;
		}
	}
	printf("letter:%d\n",let);
	printf("digit:%d\n",dig);
	printf("other:%d\n",other);
	return 0;
 } 
