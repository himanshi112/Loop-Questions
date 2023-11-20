#include<stdio.h>
main()
{
	int s1,s2,s3,s4,a;
	printf("Entered side1,side2,side3,side4 and angle:");
	scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&a);
	if(s1==s2 && s2==s3 && s3==s4 && s1==s4 && a==90)
    {
	   printf("Square");
    }
    else if(s1==s2 && s2==s3 && s3==s4 && s1==s4 && a!=90)
    {
       printf("Rhombus");
	}
	else if(s1==s3 && s2==s4 && a==90)
	{
		printf("Rectangle");
	}
	else if(s1==s3 && s2==s4 && a!=90)
	{
		printf("Parelellogram");
	}
	else
	{
		printf("Irregular quadrilaterel");
	}
	return 0;
}
