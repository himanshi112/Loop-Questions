//to input a number, N, and print first N prime numbers.

#include<stdio.h>
main()
{
	int i,j,n,c;
//	printf("Enter number");
//	scanf("%d",&n);
	for(i=1;i<100;i++)
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
	   	    printf("%d\n",i);
	   }
	}
	return 0;
}
