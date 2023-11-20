#include<stdio.h>
main()
{
	int a,b,c,max;
	printf("Entered a,b and c:");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b)
	 if(a>c)
	  printf("max is %d",max=a);
	 else
	  printf("max is %d",max=c);
	else
	 if(b>c)
	  printf("max is %d",max=b);
	 else
	  printf("max is %d",max=c);
	return 0;
}
