#include<stdio.h>
main()
{
	int cash;
	printf("Enter amount");
	scanf("%d",&cash);
	printf("2000 note = %d\n",cash/2000);
	cash=cash%2000;
	printf("500 note = %d\n",cash/500);
	cash=cash%500;
	printf("200 note = %d\n",cash/200);
	cash=cash%200;
	printf("100 note = %d\n",cash/100);
	cash=cash%100;
	printf("20 note = %d\n",cash/20);
	cash=cash%20;
	printf("10 note = %d\n",cash/10);
	cash=cash%10;
	printf("5 note = %d\n",cash/5);
	cash=cash%5;
	printf("2 note = %d\n",cash/2);
	cash=cash%2;
	printf("1 note = %d",cash/1);
	cash=cash%1;
	return 0;
}
