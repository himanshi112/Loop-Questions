#include<stdio.h>
main()
{
	int a, b,c,f_max,f_max1,s_max,s_max1;
	printf("Enter a ,b and c");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b)
	{
		f_max=a;
		s_max=b;
	}
	else
	{
		f_max=b;
		s_max=a;	
	}
	
    if(c>f_max)
	{
		f_max1=c;
		s_max1=f_max;
    }
	else
	{
		f_max1=f_max;
		s_max1=c;
	}
    if(s_max>s_max1)
	{
		printf("second max is %d",s_max);
    }
	else
	{
		printf("second max is %d",s_max1);
	}
	return 0;
}
