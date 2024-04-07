//3.calculate the series X-X33!+X55!-X77!+ .... upto n terms
#include<stdio.h>
#include<math.h>
main()
{
	float x,j,n,sum=0,f;
	int i;
	printf("Enter x and n");
	scanf("%f %f",&x,&n);
	for(i=1;i<=n;i=i+2)
	{
	   for(j=1;j<=i;j++)
	   {
	   	 f=f*j;
	   }
	   if(i%2==0)
	   {
	   	 sum=sum+pow(x,i)/f;
	   }
	   else
	   {
	   	 sum=sum+pow(x,i)/f; 
	   }
	}
	printf("Sum is %f",sum);
	return 0;
}
