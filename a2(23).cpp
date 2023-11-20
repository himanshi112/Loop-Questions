#include<stdio.h>
main()
{
	int n;
	printf("Enter number");
	scanf("%d",&n);
	if(n%10==3)
	 printf("End with 3");
	else if(n%10==7)
	 printf("End with 7");
	else
	 printf("%d",n);
	return 0;
}
