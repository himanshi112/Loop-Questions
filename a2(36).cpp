#include<stdio.h>
main()
{
	int cp;
	printf("Entered cost price:");
	scanf("%d",&cp);
	if(cp>100000)
	 printf("Road tax is %d",cp*15/100);
	else if(cp>50000 && cp<10000)
	 printf("Road tax is %d",cp*10/100);
	else if(cp<=50000)
	 printf("Road tax is %d",cp*5/100);
    return 0;
}
