#include<stdio.h>
main()
{
	float rh,ts,cc;
	printf("Entered level of reckwell hardness,carbon content and tensile strenght");
	scanf("%f %f %f",&rh,&ts,&cc);
	if(rh>50 && cc>0.7 && ts>5600)
	{
		printf("Grade 10");
	}
	else if(rh>50 && cc>0.7)
	{
		printf("Grade 9");
	}
	else if(cc>0.7 && ts>5600)
	{
		printf("Grade 8");
	}
	else if(rh>50 && ts>5600)
	{
		printf("Grade 7");
	}
	else if(rh>50 || cc>0.7 || ts>5600)
	{
		printf("Grade 6");
	}
	else
	{
		printf("Grade 0");
	}
	return 0;
}
