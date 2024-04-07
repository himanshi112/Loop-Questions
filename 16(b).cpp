//2. calculate the series X-X33+X55-X77+X99 ....upto n terms

#include<stdio.h>
#include<math.h>
main()
{
	int x,n,sum,t,i,j;
	printf("Enter x and n");
	scanf("%d %d",&x,&n);
	sum=0;
	for(i=1;i<=n;i+=2)
	{
		if(j%2==0)
		{
			t=pow(-x,i);
		    sum=sum+t/i;
		}
		else
		{
			t=pow(-x,i);
		    sum=sum+t/i;
		}
		j++;
	}
	printf("Sum is %d",sum);
	return 0;
}
