#include<stdio.h>
main()
{
	int y,m,d;
	printf("Entered year,month and day:");
	scanf("%d %d %d",&y,&m,&d);
	if(y>0)
	 if(m>0 && m<=12)
	   if(m==4 || m==6 || m==9 || m==11)
	     if(d>0 && d<=30)
	       printf("valid");
	     else
	       printf("Invalid");
	   else if(m==2)
	      if(d>0 && d<=29)
	       printf("valid");
	       else
	      printf("Invalid");
	   else 
		  if(d>0 && d<=31)
	       printf("valid");
	      else
	       printf("Invalid");
	 else
	 printf("Invalid"); 
	else
	printf("Invalid");     
	return 0;
}
