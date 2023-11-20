#include<stdio.h>
main()
{
	int a, b,c,d,f_max,f_max1,s_max,s_max1;
	printf("Enter a ,b,d and c");
	scanf("%d %d %d %d",&a,&b,&c,&d);
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
	
    if(c>d)
	{
		f_max1=c;
		s_max1=d;
    }
	else
	{
		f_max1=d;
		s_max1=c;
	}
    if(s_max>s_max1)
	{
		if(f_max1>s_max)
		{
			printf("second max is %d",f_max1);
		}
		else
		{
			printf("second max is %d",s_max);
		}
		
    }
	else
	{
		if(f_max>s_max1)
		{
			printf("second max is %d",f_max);
		}
		else
		{
			printf("second max is %d",s_max1);
		}
	}
	return 0;
}
