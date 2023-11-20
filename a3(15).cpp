#include<stdio.h>
main()
{
	int a,b,c,t;
	printf("Enter three angle of triangle");
	scanf("%d %d %d",&a,&b,&c);
	t=a+b+c;
	if(a==b&&b==c&&a==c)
	{
		printf("Equilateral triangle");
	}
	else if(a==90&&b!=90&&c!=90||a!=90&&b==90&&c!=90||a!=90&&b!=90&&c==90)
	{
		printf("Right angle");
	}
	else if(a>90&&b<90&&c<90||a<90&&b>90&&c<90||a<90&&b<90&&c>90)
	{
		printf("abtuse angle");
	}
	else
	{
		printf("Acute angle");
	}
	return 0;
}
