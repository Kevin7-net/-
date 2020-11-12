#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int number;
	int count=0;
	srand(time(0));
	int a = rand();
	number=a%100+1;
	printf("我已经想好了一个1到100之间的数。");
	do {
		printf("请猜这个1到100之间数：");
		scanf("%d", &a);
		if ( a > number ) {
			printf("你猜的数大了。");
		} else if ( a < number ) {
			printf("你猜的数小了。");
		}
		count ++;
	} while (a != number);
	printf("太好了，你用了%d次就猜到了答案。\n", count);


	return 0;
}
