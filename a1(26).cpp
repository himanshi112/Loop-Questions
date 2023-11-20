#include<stdio.h>
main()
{
	int m,p,b;
	printf("Enter money and price:");
	scanf("%d %d",&m,&p);
	b=m/p;
	printf("Books we can buy %d",b);
	return 0;
}
