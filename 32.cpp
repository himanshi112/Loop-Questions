#include<stdio.h>
main()
{
	int a,b,i,z,n;
	printf("Enter n");
	scanf("%d",&n);
	a=1;
	b=-1;
    for(i=1;i<=n;i++)
    {
    	z=a+b;
    	b=a;
    	a=z;
    	printf("%d\t",z);
	}
	return 0;
}
