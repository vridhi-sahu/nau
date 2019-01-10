#include<stdio.h>
#include<stdlib.h>
main(int argc, char *argv[])
{
	int dec=0,bin,n,rem=0,base=1;
	bin=atoi(argv[1]);
	n=bin;
	while(bin!=0)
	{
		rem=bin%2;
		dec=dec+(rem*base);
		bin=bin/10;
		base=base*2;
	}
	printf("the decimal value of %d is %d",n,dec);
}
