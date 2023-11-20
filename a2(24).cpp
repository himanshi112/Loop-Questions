#include<stdio.h>
main()
{
	int a,b;
	printf("Enter a and b");
	scanf("%d %d",&a,&b);
	if(a>b)
	 printf("%d",a-b);
	else
	 printf("%d",a+b);
	return 0;
}
