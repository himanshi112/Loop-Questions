#include<stdio.h>
#include<math.h>
main()
{
	int a,l,t;
	printf("Enter a:");
	scanf("%d",&a);
	l=4*pow(a,2);
	t=6*pow(a,2);
	printf("Lateral surface area=%d Total surface area=%d",l,t);
	return 0;
}
