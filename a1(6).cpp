#include<stdio.h>
#include<math.h>
main()
{
	float p,n,i,t,b;
	printf("Enter p,n and i:");
	scanf("%f %f %f",&p,&n,&i);
	b=1+i/100;
	t=p*pow(b,n);
    printf("%f",t);
	return 0;
}
