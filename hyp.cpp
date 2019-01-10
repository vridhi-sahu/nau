// cal hypotynuse upto 2 decimal places
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(int argc, char *argv[])
{
	float base, per, hyp, x, h;
	base=atoi(argv[1]);
	per=atoi(argv[2]);
	x = (base*base) + (per*per);
	hyp = sqrt(x);
	printf("The hypotynuse is %.2f", hyp);
}
