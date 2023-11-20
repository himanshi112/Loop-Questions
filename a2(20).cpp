#include<stdio.h>
main()
{
	int q,c,p;
	printf("Entered quantity");
	scanf("%d",&q);
	c=1000*q;
	if(c>1000)
	{
		p=c-(c*10/100);
		printf("%d",p);
	}
	else
	{
		printf("%d",c);
	}
	return 0;
}
