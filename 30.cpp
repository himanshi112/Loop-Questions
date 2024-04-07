//Write a program to find the sum of all prime numbers between 1 to n. (n input from the user)

#include<stdio.h>
main()
{
	int i,j,n,c,sum=0;
	printf("Enter number");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
	   c=0;
	   for(j=1;j<i;j++)
	   {
	   	   if(i%j==0)
		    {
			   c++;
		    }
	   }
	   if(c==1)
	   {
	   	    sum=sum+i;
	   }
	}
	printf("Sum is %d",sum);
	return 0;
}
