// to show how to find the product of n natural numbers.
#include<stdio.h>
main()
{
	int i=1,n,p=1;
	printf("Enter number");
	scanf("%d",&n);
	while(i<=n)
	{
		if(n>0)
		p*=i;
		printf("%d\n",p);
		i++;
	}
	return 0;
}
