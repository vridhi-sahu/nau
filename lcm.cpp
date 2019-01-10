#include<stdio.h>
#include<stdlib.h>
main(int argc, char *argv[])
{
	if(argc==1 || argc > 3)
	{
		printf("Enter two arguments");
	}
	else
	{
		int x,y,n1,n2;
		x=atoi(argv[1]);
		y=atoi(argv[2]);
		n1=x, n2=y;
		while(n1!=n2)
		{
			if(n1>n2)
			{
				n1=n1-n2;
			}
			else
			{
				n2=n2-n1;
			}
		}
		printf("The lcm of %d and %d is %d",x,y,(x*y)/n1);
	}
}
