#include<stdio.h>
main()
{
	int i,j,n;
	printf("Enter number");
	scanf("%d",&n);
	int k=0;
	for(i=1;i<=2*n-1;i++)
	{
		if(i<=n)
		{
			k++;
		}
		else
		{
			k--;
		}
		for(j=1;j<=n;j++)
		{
			if(j<=k)
			{
				printf("*");
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
//#include<stdio.h>
//main()
//{
//	int i,j,n;
//	printf("Enter number");
//	scanf("%d",&n);
//	int k=0;
//	for(i=1;i<=2*n-1;i++)
//	{
//		if(i<=n)
//		{
//			k++;
//		}
//		else
//		{
//			k--;
//		}
//		for(j=1;j<=n;j++)
//		{
//			if(j==k || j==1)
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
