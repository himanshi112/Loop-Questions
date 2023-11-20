#include<stdio.h>
main()
{
	int n;
	printf("Enter a number");
	scanf("%d",&n);
	if(n%5==0 && n%11==0)
	{
		printf("Number is divisible by both 5 and 11");
	}
	else if(n%5==0)
	{
		printf("Number is divisile by 5");
	}
	else  if(n%11==0)
	{
		printf("Number is divisible by 11");
	}
	else if(n%5==0 && n%11==0)
	{
		printf("Number is divisible by both 5 and 11");
	}
	else
	{
		printf("None");
	}
	return 0;
}
