//to show how to find the sum of all the numbers that are divisible by P but 
//not divisible by Q within a given range. (Input lower limit, upper limit, P, and Q from the user)
#include<stdio.h>
main()
{
	int l,u,p,q,n,s=0;
	printf("Enter lower bound,upper bound,p and q");
	scanf("%d %d %d %d",&l,&u,&p,&q);
	n=l;
	if(n%p==0)
	{
		if(n%q==0)
		{
			n++;
		}
		else
		{
			s=s+n;
		}
		while(n>u)
		{
			printf("%d",s);
		}
	}
	return 0;
}
