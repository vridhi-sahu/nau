#include<stdio.h>
#include<stdlib.h>
main(int argc, char *argv[])
{
	int i=1,x[100], sum=0,count;
	if(argc==1)
	{
		printf("Enter the number");
	}
	else
	{
		count=argc-1;
		while(i<=count)
		{
			x[i]=atoi(argv[i]);
			i++;
		}
		i=1;
		while(i<=count)
		{
			sum+=x[i];
			i++;
		}
		printf("avgerage is %d", sum/count);
	}
}
