#include<stdio.h>
main()
{
	int x,y,r;
	printf("Enter x and y:");
	scanf("%d %d",&x,&y);
	r=x%y;
	printf("%d",r);
	return 0;
}
