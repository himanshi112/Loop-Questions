//to show how consecutive even numbers starting from 2 are summed up until 
//the sum just exceeds 1000 and then show the sum and the number of even numbers added.
#include<stdio.h>
main()
{
	int i=2,c=0,s=0,n;
	printf("Enter number");
	scanf("%d",&n);
	while(i<=n)
	{
		if(i%2==0)
		{
			s=s+i;
			c++;
		}
		i++;
	}
	printf("Sum is %d\nNumber is %d",s,c);
	return 0;
}
