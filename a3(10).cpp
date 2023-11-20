#include<stdio.h>
main()
{
	int pay,b;
	printf("Entered pyment of employee");
	scanf("%d",&pay);
	if(pay>3000)
	{
		printf("Bonus is 300");
	}
	else if(3000>=pay && pay>=1600)
	{
		b=pay*10/100;
		if(b>240)
		{
			printf("Bonus is 240");
		}
		else
		{
			printf("No bonus");
		}
	}
	else if(pay<=1600)
	{
		b=pay*15/100;
		if(b>=100)
		{
			printf("Bonus is %d");
		}
		else
		{
			printf("Bonus is 100");
		}
	}
	return 0;
}
