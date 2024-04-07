#include<stdio.h>
main()
{
	int i,j,n;
	printf("Enter value of n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		int k=1;
		for(j=1;j<=3*n+3;j++)
		{
			if(j<=2*n-1)
			{
				if(j>=n+1-i && j<=n-1+i && k==1)
			    {
			    	printf("*");
			        k=0;
				}
			    else
			    {
			    	printf("_");
			    	k=1;
				}
			}
			else
			{
				if(j>=2*n+3-i && j<=2*n+1+i && k==1)
			    {
			      printf("*");
			      k=0;
				}
			    else
			    {
			    	printf("_");
			    	k=1;
				}
			}	
		}
		printf("\n");
	}
	return 0;
}
