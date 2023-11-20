#include<stdio.h>
main()
{
	int mr,dis,sp;
	printf("Enter Market Price and Discount:");
	scanf("%d %d",&mr,&dis);
	sp=mr-dis;
	printf("Selling price is %d",sp);
	return 0;
}
