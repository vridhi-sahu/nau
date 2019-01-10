// 1 1 2 3 4 9 8 27 

#include<stdio.h>
int exp(int base, int n)
{
	int result=0,b=1,i;
	if(n==0)
	{
		result = 1;
	}
	else
	{
		for(i=1;i<=n;i++)
		{
			result=result + base*b;
			b=b*base;
		}
	}
	return result;
}
int main()
{
	int n, r, base,x, a=1;
	scanf("%d", &n);
		if(n%2==0)
		{
			if(n==2)
			printf("1");
			else
			{
				base=3, x=(n/2)-1;
				r=exp(base,x);
			}	
		}
		else
		{
		if(n==1)
		printf("1");
		else
		{
			base=2, x=(n/2);
			r=exp(base,x);
		}
	}
	printf("%d", r);
	return 0;
}
