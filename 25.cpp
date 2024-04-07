//to determine the HCF of n given numbers. 
//Input a value n from the user then input n numbers from the user.
#include<stdio.h>
main()
{
	int n,a,i,hcf,b;
	printf("Enter n and a");
	scanf("%d %d",&n,&a);
	for(i=1;i<=n-1;i++)
	{
		printf("Enter b");
		scanf("%d",&b);
		if(a==b)
		{
			if(a>b)
			{
				a-=b;
			}
			else
			{
				b-=a;
			}
			hcf=a;
		}
	}
	printf("hcf is %d",a);
	return 0;
}
