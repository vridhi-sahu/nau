#include<stdio.h>
#include<stdlib.h>
main(int argc, char *argv[])
{
	int i=1,a[100], sum=0,n,x;
	if(argc==1)
	{
		printf("Enter the number");
	}
	else
	{
		n=atoi(argv[1]);
		x=n;
		while(n>0)
		{
			a[i]=n%10;
			n/=10;
			i++;
		}
		while(i>0)
		{
			sum+=a[i];
			i--;
		}
	}
	printf("The sum of digits of %d is %d",x,sum);
}
