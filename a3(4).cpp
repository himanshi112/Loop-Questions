#include<stdio.h>
main()
{
	int u,b;
	printf("Enter unit of bill");
	scanf("%d",&u);
	if(u<=100)
	 {
	 	printf("No charge");
	 }
	else if(u<=200)
	 {
	 	b=(u-100)*5;
	    printf("%d",b);
	 }
	else if(u<=400)
	 {
	 	b=(100*5)+(u-200)*10;
	    printf("%d",b);
	 }
	else
	 {
	 	printf("Invalid");
	 }
	return 0;
}
