#include<stdio.h>
#include<stdlib.h>
main(int argc, char *argv[])
{
	int a, b,avg;
	if(argc == 1 || argc>3)
	{
		printf("Enter two numbers");
	}
	else
	{
		
		a=atoi(argv[1]);
		b=atoi(argv[2]);
		avg=(a+b)/2;
	}
	printf("The average of %d and %d is %d",a,b,avg );
}
