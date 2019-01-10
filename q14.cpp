#include<stdio.h>
#include<stdlib.h>
int main ()
{
	int num, n, r, sum=0;
	printf("Enter number:");
	scanf("%d",&num);
	n=num;
	while(num>0){
		r=num%10;
		sum=sum+(r*r*r);
		num=num/10;
	}
	if(sum==n)
	{
		printf("Number is armstrong");
	}
	
	else
	{
		printf("Number is not armstrong");
	}
	return 0;
}
