#include<stdio.h>
main()
{
	int n,m,r;
	int sum=0,temp,c=0;
	printf("Enter n and m:");
	scanf("%d %d",&n,&m);
	while(n<=m)
	{
		temp=n;
		r=n%10;
		sum=(sum*10)+r;
		n=n/10;
		if(temp==sum)
		{
			c++;
		}
		n++;
	}
	printf("%d",c);
	return 0;

