#include<stdio.h>
main()
{
	int n,i,j;
	printf("Enter number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n+3;j++)
		{
			if(j==i && j==2*n-i)
			{
				printf("*");
			}
		}
		printf("\n");
	}
}
