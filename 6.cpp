// to show how to find all even natural numbers that are divisible by 7 in a given range.
//(Input lower and upper limit of the range from the user)
#include<stdio.h>
main()
{
	int i=1,n;
	printf("Enter number");
	scanf("%d",&n);
	while(i<=n)
	{
		if(i%14==0)
		{
			printf("%d\n",i);
		}
		i++;
	}
	return 0;
}
