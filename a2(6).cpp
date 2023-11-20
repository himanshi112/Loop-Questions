#include<stdio.h>
main()
{
	int a,b;
	printf("Enter values of a and b:");
	scanf("%d %d",&a,&b);
	if(a==b)
    {
	 printf("Square"); 
    }
    else
    {
     printf("Rectangle");
	}
	return 0;
}
