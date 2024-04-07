#include<stdio.h>
main()
{
	int i,j,n;
	printf("Enter number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		int k=1;
		for(j=1;j<=2*n-1;j++)
		{
			if(j>=n-i+1 && j<=n+i-1)
			{
				printf("%d",k);
				if(j<=n)
				{
					k++;
				}
				else
				{
					k--;
				}
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
