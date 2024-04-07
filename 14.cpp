// to show how to determine whether a given number is a perfect number.  
//(Input the number from the user)
#include<stdio.h>
main()
{
	int i,n,s=0,num;
	printf("Enter number");
	scanf("%d",&n);
	num=n;
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			s=s+i;
		}
	}
	if(s==num)
	{
		printf("Perfect Number");
	}
	else
	{
		printf("Not perfect number");
	}
	return 0;
}
