#include<stdio.h>
main()
{
	int a, b,c,d,f_min,f_min1,s_min,s_min1;
	printf("Enter a ,b,d and c");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	if(a<b)
	{
		f_min=a;
		s_min=b;
	}
	else
	{
		  f_min=b;
		  s_min=a;	
	}
	
    if(c<d)
	{
		f_min1=c;
		s_min1=d;
    }
	else
	{
		f_min1=d;
		s_min1=c;
	}
    if(s_min<s_min1)
	{
		printf("Third max is %d",s_min);
    }
	else
	{
		printf("Third max is %d",s_min1);
	}
	return 0;
}
