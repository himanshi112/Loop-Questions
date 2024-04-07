//to calculate the sum of the following series where n is input. 1 + 1/2 + 1/3 + 1/4 + 1/5 +…………1/n
#include<stdio.h>
main()
{
	float p=1,s=1,n,i;
	printf("Enter number that we have to print series");
	scanf("%f",&n);
	for(i=2;i<=n;i++)
	{
		p=1/i;
		s=s+p;
	}
	printf("Sum is %f",s);
	return 0;
}
