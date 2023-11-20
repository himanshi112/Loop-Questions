#include<stdio.h>
main()
{
	float t,l,g;
	printf("Enter time and lenght:");
	scanf("%f %f",&t,&l);
	g=(4*3.142*3.142*l)/t*t;
	printf("Gravity is %f",g);
	return 0;
}
