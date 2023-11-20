#include<stdio.h>
main()
{
	float a,b,add,sub,mul,div;
	printf("Enter a and b:");
	scanf("%f %f",&a,&b);
	add=a+b;
	sub=a-b;
	mul=a*b;
	div=a/b;
	printf("add=%f sub=%f mul=%f div=%f",add,sub,mul,div);
	return 0;
}
