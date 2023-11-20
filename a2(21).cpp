#include<stdio.h>
main()
{
	int sal,y,b;
	printf("Enter year and salary:");
	scanf("%d %d",&y,&sal);
	if(y>5)
	{
		b=sal*5/100;
		printf("Bonus is %d",b);
	}
	else
	{
		printf("No Bonus");
	}
	return 0;
}
