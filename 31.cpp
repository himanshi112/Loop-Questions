//to print only the prime factors of a given number N.

#include<stdio.h>
main()
{
	int n,a,i;
	printf("Enter number");
	scanf("%d",&n);
	for(i=1;i<=n/2;i++)
	{
		if(n%i==0)
		{
			printf("Factors are\n");
			printf("%d\t",i);
		}
	}
	return 0;
}
