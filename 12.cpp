//to show the logic of obtaining the reversed form of a given whole number. 
//(Input the number from the user)
#include<stdio.h>
main()
{
	int n,r=0;
	printf("Enter number");
	scanf("%d",&n);
	while(n>0)
	{
		r=(r*10)+n%10;
		n=n/10;
	}
	printf("Reverse of number is %d",r);
	return 0;
}
