#include<stdio.h>

int main()
{
	int dig, n, rem, arr[100], j=0;
	int r, s=0, i=1, upper, lower;
	int x=n;
	scanf("%d", &n);
	/*
	while(n>0)
	{
		rem = n % 10;
		arr[j] =  rem;
		j++;
		n=n/10;	
	}
	printf("num of digits is %d", j);
	*/
	while(1)
	{
		while(n>0)
		{
		r= n % 10;
		s = (s*i) + r;
		i=i*10;
		n=n/10;
		}
		if(s==x)
		{
			upper=s;
		//	printf("%d",s);
			break;
		}
		else
		{
			n = x + 1;
		}
		
	}
	
	while(1)
	{
		while(n>0)
		{
		r= n % 10;
		s = (s*i) + r;
		i=i*10;
		n=n/10;
		}
		if(s==x)
		{
			lower=s;
		//	printf("%d",s);
			break;
		}
		else
		{
			n = x - 1;
		}
		
	}
	if (x == upper || x== lower)
	{
		printf("%d",x);
	}
	else if ((upper-x)>(x-lower))
	{
		printf("%d", upper);
	}
	else
	{
		printf("%d", lower);
	}
}
