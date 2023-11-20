#include<stdio.h>
main()
{
	int mcw,mwe,tot;
	printf("Entered marks of course work and written examination:");
	scanf("%d %d",&mcw,&mwe);
	tot=mcw+mwe;
	if(mcw<20)
	{
		printf("Fail");
	}
	else if(mwe<20)
	{
		if(tot>44)
		{
			printf("Technical Fail");
		}
		else
		{
			printf("Fail");
		}
	}
	else if(tot==44)
	{
		printf("Moderate");
	}
	else if(tot>=45)
	{
		printf("pass");
	}
	else
	{
		printf("Not define");
	}
	return 0;
}
