#include<stdio.h>
main()
{
	int charge,d;
	printf("Entered days:");
	scanf("%d",&d);
	if(d>=5)
	{
		charge=2*d;
		printf("charge id %d",charge);
	}
	else if(d>=10)
	{
		charge=(d-5)*3+5*2;
		printf("charge is %d",charge);
	}
	else if(d>=15)
	{
		charge=(d-15)*5+5*4+5*3+5*2;
		printf("charge is %d",charge);
	}
	return 0;
}
