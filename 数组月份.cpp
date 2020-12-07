#include<stdio.h>

int main()

{

	char a[][10]={

	"January",

	"Februry",

	"March",

	"April",

	"May",

	"June",

	"July",

	"August",

	"September",

	"October",

	"November",

	"December",	

	};

	int yue;

	scanf("%d", &yue);

	printf("%s\n", a[yue-1]);

	return 0;

}
