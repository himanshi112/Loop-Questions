//to print multiplication tables from 1 to 5.
#include<stdio.h>
main()
{
	int n,i,j;
	printf("Enter tables you want");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%d\t",i*j);
		}
		printf("\n");
	}
	return 0;
}
