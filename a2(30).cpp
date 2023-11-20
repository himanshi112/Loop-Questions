#include<stdio.h>
main()
{
	int n;
	printf("Enter a number");
	scanf("%d",&n);
	if(n<0)
	 printf("Nagative number");
	else if(n>0)
	 printf("Positive number");
	else
	 printf("Number is zero");
	return 0;
}
