#include<stdio.h>
main()
{
	float cp,sp,l;
	printf("Enter values of selling price and cost price:");
	scanf("%f %f",&sp,&cp);
	if(sp<cp)
    {
     l=(cp-sp)/cp*100;
	 printf("Loss is %f",l); 
    }
    else
    {
     printf("invalid");
	}
	return 0;
}
