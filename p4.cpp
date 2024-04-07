//#include<stdio.h>
//main()
//{
//	int i,j,n;
//	printf("Enter number");
//	scanf("%d",&n);
//	for(i=1;i<=n;i++)
//	{
//		for(j=1;j<=n;j++)
//		{
//			if(j<=n-i+1)
//			{
//				printf("*");
//			}
//			else
//			{
//				printf(" ");
//			}
//		}
//		printf("\n");
//}
//	return 0;
//}
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
			if((j == 1)|| (i == 1) || (j==n-i+1))
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
