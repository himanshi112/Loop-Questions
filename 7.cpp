// to find the sum of the squares of the first 9 natural numbers that are divisible by 3.
#include<stdio.h>
main()
{
	int n=1,s=0,c=0;
	while(n%3==0)
	{
		s=s+n*n;
		c++;
		if(c==9)
		{
			printf("Sum is %d",s);
		}
		n++;
	}
	return 0;
}
