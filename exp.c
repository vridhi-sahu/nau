#include<stdio.h>
int exp(int base, int n)
{
	int result;
	if(n==0)
	{
		result = 1;
	}
	else
	{
		result = base * exp(base, n-1);
	}
	return result;
}
int main()
{
	int n, r, base,x, a=1;
	scanf("%d", &n);
	if(n==1 || n==2)
	{
		printf("%d",a);
	}
	else
	{
		if(n%2==0)
		{
			base=3, x=(n/2)-1;
			r=exp(base,x);
		}
		else
		{
			base=2, x=(n/2);
			r=exp(base,x);
		}
	}
	printf("%d", r);
	return 0;
}