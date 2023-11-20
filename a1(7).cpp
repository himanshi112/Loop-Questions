#include<stdio.h>
main()
{
	int x,y,c;
	printf("Enter x and y:");
	scanf("%d %d",&x,&y);
	c=x;
	x=y;
	y=c;
	printf("%d %d",x,y);
	return 0;
}
