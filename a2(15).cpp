#include<stdio.h>
main()
{
	int a,b,h,m,p,e,s;
	printf("Enter marks of hindi,math,phy,eng,sci:");
	scanf("%d %d %d %d %d ",&h,&m,&p,&e,&s);
	a=h+m+p+e+s;
	b=h+m+p+e+s;
	if(a>b)
    {
	 printf("a is topper"); 
    }
    else
    {
     printf("b is not topper",b);
	}
	return 0;
}
