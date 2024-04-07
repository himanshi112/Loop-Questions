// to find out the sum of first N terms of the following series.
// 5 + 55 + 555 + 5555 + .......... up to N terms.

#include<stdio.h>
main()
{
	int n,i,s=0,t=0;
	printf("Enter number");
	scanf("%d",&n);
	i=0;
	while(i<n)
	{
		t=t*10+5;
	    s=s+t;
		i++;
	}
		printf("%d",s);
	return 0;
}
