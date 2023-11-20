#include<stdio.h>
main()
{
	float m,p,b,d;
	printf("Enter money and price:");
	scanf("%f %f",&m,&p);
	b=m/p;
	d=b/5;
	printf("Pens can be brought %f",d);
	return 0;
}
