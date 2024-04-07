// to find the sum of the first n natural numbers, where n is any given integer.
#include<stdio.h>
main()
{
	int i,n,sum=0;
	printf("Enter range:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum+=i;
	}
	printf("Sum is %d",sum);
	return 0;
}
