#include<stdio.h>
main()
{
	int i,j,n;
	printf("Enter number");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if((i==0&&j>=1&&j<=n-1)||(i==n-1&&j>=1&&j<=n-1)||(j==0&&i>=1&&i<n-1)) 
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
