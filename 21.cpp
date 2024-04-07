//Some three-digit numbers show the property that the sum of the factorials of the digits equals the numbers,
//for example, 145 = 1! + 4! + 5!.
#include<stdio.h>
main()
{
	int n,temp,r,count,fact,sum=0;
	printf("Enter a number");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		count=1;
		fact=1;
		while(count<=r)
		{
			fact=fact*count;
			count++;
		}
		sum=sum+fact;
		n=n/10;
	}
	if(temp==sum)
	{
		printf("%d is a strong number",temp);
	}
	else
	{
		printf("%d is not a strong number",temp);
	}
	return 0;
	
}
