//1.calculate the series X+X2/2+X3/3+X4/4  ....upto n terms
#include<stdio.h>
#include<math.h>
main()
{
	float x,n,sum,t,i;
	printf("Enter x and n");
	scanf("%f %f",&x,&n);
	sum=0;
	for(i=1;i<=n;i++)
	{
		t=pow(x,i);
		sum=sum+t/i;
	}
	printf("Sum is %f",sum);
	return 0;
}
