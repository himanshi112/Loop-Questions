#include<stdio.h>
main()
{
	int a,b;
	printf("Enter values of a and b:");
	scanf("%d %d",&a,&b);
	if(a>b)
    {
	 printf("%d is Greater",a); 
    }
    else
    {
     printf("%d is Greater",b);
	}
	return 0;
}
