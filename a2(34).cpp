#include<stdio.h>
main()
{
	int r;
	printf("Entered roll number:");
	scanf("%d",&r);
	if(r%5==0)
	 printf("%d is Leader of group");
	else
	 printf("%d is not a leader of group");
	return 0;
}
