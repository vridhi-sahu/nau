// input a given range and find sum of all odd and even in range (a,b)
#include<stdio.h>
#include<stdlib.h>
main(int argc, char *argv[])
{
	int upper,lower,arr[1000],i,n,sumodd=0,sumeven=0;
	lower = atoi(argv[1]);
	upper = atoi(argv[2]);
	for(i=lower,n=0;i<=upper;i++)
	{
		arr[n]=i;
		n++;
	}
	for(i=lower,n=0;i<=upper;i++)
	{
		printf("%d\n",arr[n]);
		n++;
	}
	for(i=lower,n=0;i<=upper;i++)
	{
		if(arr[n]%2==0)
		{
			sumeven+=arr[n];
		}
		else
		{
			sumodd+=arr[n];
		}
		n++;
	}
	printf("The sum of all even numbers in the range %d to %d is %d\n",lower,upper,sumeven);
	printf("The sum of all odd numbers in the range %d to %d is %d",lower,upper,sumodd);

}
