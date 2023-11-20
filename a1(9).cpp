#include<stdio.h>
#include<string.h>
main()
{
    char m[20];
	printf("Enter message");
//	scanf("%s",&m);
    gets(m);
	printf("%s",m);
	return 0;
}
