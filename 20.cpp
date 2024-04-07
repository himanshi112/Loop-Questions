//to show how to determine all the 3-digit Armstrong numbers. 
//A number is called an Armstrong number if the sum of the values 
//of the digits each raised to the power equal to the number of digits 
//in the number equals the number. For example, 153 is an Armstrong number, because 153 = 13 + 53 + 33.

#include<stdio.h>
#include<math.h>
main()
{
	int n,temp,r,i;
	printf("Enter limit\n");
	scanf("%d",&n);
    for(i=1;i<=n;i++)
	{
		int sum=0,count=0;
	    temp=i;
		while(temp>0)
		{
			temp=temp/10;
			count++;
		}
		temp=i;
		while(temp>0)
		{
			r=temp%10;
			sum=sum+pow(r,count);
			temp=temp/10;
		}
		if(i==sum)
		{
			printf("%d\n",i);
		}
   }
   return 0;
}
