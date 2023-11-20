#include<stdio.h>
main()
{
	float a,b,c,d;
	printf("Enter a,b and c:");
	scanf("%f %f %f",&a,&b,&c);
	d=(a+b+c)/2;
	printf("Semiperimeter=%f",d);
	return 0;
}
