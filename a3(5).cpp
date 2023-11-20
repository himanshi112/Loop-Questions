#include<stdio.h>
main()
{
	int a,d,sal;
	char gen;
	printf("Enter age,day and gender");
	scanf("%d %d %c",&a,&d,&gen);
	if(a>=18 && a<=30)
	{
		if(gen=='m')
		{
			printf("salary is %d",sal=700*d);
		}
		else if(gen=='f')
		{
			printf("salary is %d",sal=750*d);
		}
		else
		{
			printf("Appropriate");
		}
	}
	else if(a>30 && a<=40)
	{
	   if(gen=='m')
		{
			printf("salary is %d",sal=800*d);
		}
		else if(gen=='f')
		{
			printf("salary is %d",sal=850*d);
		}
		else
		{
			printf("Appropriate");
		}	
	}
	else
	{
		printf("Appropriate");
	}
 }
