#include<stdio.h>
main()
{
	float s,gs;
	printf("Entered salary of employee");
	scanf("%f",&s);
	if(s<=10000)
	 printf("Gross salary is %f",gs=s+s*0.2+s*0.8);
	else if(s<=20000)
	 printf("Gross salary is %f",gs=s+s*0.25+s*0.9);
	else if(s>20000)
	 printf("Gross salary is %f",gs=s+s*0.3+s*0.95);
	return 0;
}
