// to find the sum of the first 15 even natural numbers.
#include<stdio.h>
main()
{
	int i,sum=0,c=1,n;
	printf("Enter number");
	scanf("%d",&n);
	i=1;
	while(c<=n)
	{
		sum+=(2*i );
		c++;
		i++;
	}
	printf("Sum is %d",sum);
	return 0;
}
