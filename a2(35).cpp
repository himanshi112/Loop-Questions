#include<stdio.h>
main()
{
	int h;
	printf("Entered height of children");
	scanf("%d",&h);
	if((h/12)>=5)
	 printf("Allowed to ride");
	else
	 printf("Not allowed to ride");
	return 0;
}
