#include<stdio.h>

int main()
{
	int i=1,r,s=0, n;
	scanf("%d", &n);
	while(n)
	{
		r=n%10;
		if(r==5)
		{
			r=0;
		}
		s= s + r*i;
		i=i*10;	
		n=n/10;
	}
	printf("%d",s);
}
