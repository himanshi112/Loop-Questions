#include<stdio.h>
main()
{
	int a,b,c,t1,t2,t3;
	printf("Enter three sides of triangle");
	scanf("%d %d %d",&a,&b,&c);
	t1=a*a+b*b;
	t2=a*a+c*c;
	t3=c*c+b*b;
    if(t1==c*c||a*a==t3||t2==b*b)
	{
		printf("Right angle triangle");
	}
	else if(a==b&&b==c&&a==c)
	{
		printf("Equilateral triangle");
	}
	else if(a==b&&b==c&&c!=a||a==b&&b!=c&&c==a||a!=b&&b==c&&c==a)
	{
		printf("Isoscales triangle");
	}
	else
	{
		printf("scales triangle");
	}
	return 0;
}
