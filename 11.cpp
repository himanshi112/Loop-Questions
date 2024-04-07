//to show how the sum of the digits of a given number can be obtained. (Input the number from the user)
#include<stdio.h>
main()
{
	int n,r,sum=0;
	printf("Enter number");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	printf("Sum of digits is %d",sum);
	return 0;
}
