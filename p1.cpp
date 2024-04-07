#include<stdio.h>
main()
{
	int i,j,n;
	printf("Enter number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(j<=i)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
#include<stdio.h>
main()
{
	int i,j,n;
	printf("Enter number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if((j == 1)|| (i == n) || (i == j))
			{
				printf("* ");
			}
			else	
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	return 0;
}
