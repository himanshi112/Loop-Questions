#include<stdio.h>
main()
{
	int x,y;
	printf("Enter x and y:");
	scanf("%d %d",&x,&y);
	x=x+y;
	y=x-y;
	x=x-y;
	printf("%d %d",x,y);
	return 0;
}
