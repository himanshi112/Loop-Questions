#include<stdio.h>
main()
{
	int y;
	printf("Entered year");
	scanf("%d",&y);
	if(y%400==0 || y%4==0 && y%4==0)
	{
		printf("leap Year");
	}
	else
	{
		printf("not a leap year");
	}
	return 0;
}
