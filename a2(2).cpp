#include<stdio.h>
main()
{
	int d;
	printf("Enter day:");
	scanf("%d",&d);
	if(d==0)
    {
	 printf("sunday"); 
    }
    else if(d==1)
    {
     printf("Monday");
	}
	else if(d==2)
    {
     printf("Tuesday");
	}
	else if(d==3)
    {
     printf("Wednesday");
	}
	else if(d==4)
    {
     printf("Thusday");
	}
	else if(d==5)
    {
     printf("Friday");
	}
	else if(d==6)
    {
     printf("Saturday");
	}
	else
	{
	 printf("Wrong Days Entered");	
	}
	return 0;
}
