#include<stdio.h>
main()
{
	int n,i,j;
	printf("Enter number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",i);
		}
		printf("\n");
	}
}
//#include<stdio.h>
//main()
//{
//	int n,i,j;
//	printf("Enter number");
//	scanf("%d",&n);
//	for(i=1;i<=n;i++)
//	{
//		for(j=1;j<=i;j++)
//		{
//			printf("%d",j);
//		}
//		printf("\n");
//	}
//}

