#include <stdio.h>
int main()

{
	int n,num,num2,max,smax,a,b;
	scanf("%d %d %d",&n,&num,&num2);
	max=num;
	smax=num2;
	if (max<smax)
	{
		a=smax;
		smax=max;
		max=a;
	}
	for (int i=1; i<=n-2; i++)
	{
		scanf("%d",&b);
		if (b<max)
		{
			if (b>max)
			{
				smax=b;
			}
		}
		else
		{
			smax=max;
			max=b;
		}
	}
	printf("%d ",smax);
	
}
