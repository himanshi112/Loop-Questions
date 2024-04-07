//to show how to obtain the HCF and LCM of two numbers. (input two numbers from the user)
#include<stdio.h>
main()
{
	int n1,n2,r,hcf,lcm,p;  
	printf("Enter number1 and number2:");
	scanf("%d %d",&n1,&n2);
	p=n1*n2;
	while(n2>0)
	{
		r=n1%n2;
		n1=n2;
		n2=r;
	}
	hcf=n1;
	lcm=p/hcf;
	printf("Lowest Common Multiple is %d\nHighest Common Multiple is %d",lcm,hcf);
	return 0;
}
