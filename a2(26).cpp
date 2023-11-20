#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter a and b");
	scanf("%d %d %d",&a,&b,&c);
	if(c='+')
	 printf("%d",a+b);
	else if(c='-')
	 printf("%d",a-b);
	else if(c='*')
     printf("%d",a*b);
    else if(c='a/b')
     printf("%d",a/b);
    return 0;
}
