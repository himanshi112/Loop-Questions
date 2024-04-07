// to show how to find all the perfect numbers under 10,000.

#include<stdio.h>
main()
{
	int i,j,n,num;
	printf("Enter number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{	
	   int s=0;
	   for(j=1;j<i;j++)
	   {
		  if(i%j==0)
		  {
			s=s+j;
		  }
	   }
	   if(s==i)
	   {
	   	    printf("Perfect numbers are:");
		    printf("%d\n",i);
	   }
    }
	return 0;
}
