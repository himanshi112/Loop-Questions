//to show how the factors of a given number can be obtained. 
//(Input the number from the user)
#include<stdio.h>
main()
{
	int i,n;
	printf("Enter number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			printf("Factors is %d\n",i);
		}
	}
	return 0;
}
