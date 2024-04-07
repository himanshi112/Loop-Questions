//to input a positive integer. If the number is even, add up its digits. 
//Otherwise, multiply the individual digits and print the result.

#include<stdio.h>
main()
{
	int n,s=0,p=1,r;
	printf("Enter a number");
	scanf("%d",&n);
	if(n%2==0)
	{
		while(n>0)
	    {   
			r=n%10;
			s=s+r;
			n=n/10; 
	    }
	    printf("Sum is %d",s);
	}
	else
	{
	   while(n>0)
	   {
			r=n%10;
			p=p*r;
			n=n/10;
	    }
	    printf("product is %d",p);
    }
	return 0;
}
