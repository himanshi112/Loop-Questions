//to determine the maximum and the minimum out of n given numbers.

#include<stdio.h>
main()
{
	int i,n,a,min,max,b;
	scanf("%d",&n);
	max=a;
	min=a;
	for(i=1;i<n-1;i++)
	{
		scanf("%d",&b);
		if(max>b)
		{
			max=a;
			if(min<b)
			{
				min=a;
			}
			else
			{
				min=b;
			}
		}
		else
		{
			max=b;
		}
	}
	printf("Minimum is %d\nMaximum is %d",min,max);
	return 0;
}
