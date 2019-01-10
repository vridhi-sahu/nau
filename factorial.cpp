#include<stdio.h>
#include<stdlib.h>
main(int argc, char *argv[])
{
	int fact=1,i,num,x;
	if(argc==1 || argc>3)
	{
		printf("Enter one number");
	}
	else
	{
		num=atoi(argv[1]);
		x=num;
		while(num!=0)
		{
			fact=fact*num;
			num--;
		}
	}
	printf("The factorial of %d is %d ",x,fact);
}
