//to show how you can decide if a given number is prime or not.  
//(Input the number from  the user)

#include<stdio.h>
main()
{
	int i,n,c=0;
	printf("Enter number");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			c++;
		}
	}
	if(c==1)
	{
		printf("Prime Number");
	}
	else
	{
		printf("Not prime number");
	}
	return 0;
}
