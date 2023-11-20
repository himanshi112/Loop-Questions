#include<stdio.h>
int main()
{
	float a,b,c;
	printf("Enter a and b");
	scanf("%f %f",&a,&b);
	c=(a/b)*100;
	if(c>75)
	{
		printf("Allowed");
	}
	else
	{
		printf("Not allowed");
	}
	return 0;
}
