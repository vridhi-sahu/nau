#include<stdio.h>
#include<stdlib.h>
main(int argc, char *argv[])
{
	int n,sum=0,x,d;
	if (argc==1 || argc>2)
	{
		printf("Enter one number");
	}
	else
	{
		n=atoi(argv[1]);
		x=n;
		while(n>0)
		{
			d=n%10;
			sum+=d;
			n/=10;
		}
	}
	printf("The sum of digits of %d is %d",x,sum);
}
