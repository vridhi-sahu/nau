#include<stdio.h>
#include<stdlib.h>
main(int argc,char *argv[])
{
	int bin=0,n,dec,rem=0,base=1;
	dec=atoi(argv[1]);
	n=dec;
	while(dec!=0)
	{
		rem=dec%2;
		bin=bin+(rem*base);
		base=base*10;
		dec=dec/2;
	}
	printf("the binary form of %d is %d",n,bin);
}
