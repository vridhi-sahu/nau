#include<stdio.h>
#include<stdlib.h>
main(int argc , char *argv[])
{
	int base=1, bin, dec, rem;
	if(argc==1 || argc>3)
	{
		printf("Enter one number");
	}
	else
	{
		bin = atoi(argv[1]);
		while(bin!=0)
		{
			rem = bin % 2;
			dec += rem*base;
			base *=2;
			bin/=10;
	}
	printf("The decimal number is %d",dec);
}
}
