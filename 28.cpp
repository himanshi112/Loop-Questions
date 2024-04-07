//to find the third max of given N numbers.

#include <stdio.h>
int main()

{
	int n,num1,num2,num3,max,smax,tmax,a,b;
	scanf("%d %d %d %d",&n,&num1,&num2,&num3);
	max=num1;
	smax=num2;
	tmax=num3;
	if (max<smax)
	{
		a=max;
		max=smax;
		smax=a;
	}
	else if(max>tmax)
	{
		a=max;
		max=tmax;
		tmax=a;
	}
	else if(smax<tmax)
	{
		a=smax;
		smax=tmax;
		tmax=a;
	}
	for (int i=1; i<=n-3; i++)
	{
		scanf("%d",&b);
		if (b<max)
		{
			if (b<smax)
			{
				if(b>tmax)
				{
					tmax=b;
				}
			}
			else
			{
				tmax=smax;
				smax=b;
			}
		}
		else
		{
			tmax=smax;
			smax=max;
			max=b;
		}
	}
	printf("Third max is %d ",tmax);
    return 0;	
}
