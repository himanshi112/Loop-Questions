#include<stdio.h>
main()
{
	float h,m,e,s,c,t,p;
	printf("Enter marks of hindi,math,science,chemistry,english:");
	scanf("%f %f %f %f %f",&h,&m,&e,&s,&c);
	t=h+m+e+s+c;
	p=(t/500)*100;
	printf("Percentage is %f",p);
	return 0;
}
