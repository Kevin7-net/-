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
	printf("���Ѿ������һ��1��100֮�������");
	do {
		printf("������1��100֮������");
		scanf("%d", &a);
		if ( a > number ) {
			printf("��µ������ˡ�");
		} else if ( a < number ) {
			printf("��µ���С�ˡ�");
		}
		count ++;
	} while (a != number);
	printf("̫���ˣ�������%d�ξͲµ��˴𰸡�\n", count);


	return 0;
}
