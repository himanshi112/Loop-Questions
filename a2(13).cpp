#include<stdio.h>
main()
{
	int a;
	printf("Enter age:");
	scanf("%d",&a);
	if(a>=18)
    {
	 printf("Eligible for votting"); 
    }
    else
    {
     printf("Not eligible for votting");
	}
	return 0;
}
