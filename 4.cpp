//to print the numbers below 100 that are divisible by 7.
#include<stdio.h>
main()
{
	int i=7,n;
	printf("Enter number");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("%d\n",i);
		i+=7;
	}
	return 0;
}
