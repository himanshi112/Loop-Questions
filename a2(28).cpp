#include<stdio.h>
main()
{
	int n;
	printf("Enter a number");
	scanf("%d",&n);
	if(n<=999 && n>=100)
	 printf("Three digit",n);
	else if(99>=n && n<=10)
     printf("Two digit");
    else if(9>=n && n<=1)   
	 printf("One digit");
    else
     printf("Invalid");
	return 0;
}
