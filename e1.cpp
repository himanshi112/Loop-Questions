#include<stdio.h>
main()
{
	int n=64;
	if (n&(n-1))
	{
		printf("power of 2");
	}
	else
	{
		printf("not power of 2");
	}
	return 0;
}
