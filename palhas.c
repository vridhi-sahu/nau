#include<stdio.h>
int ispal(int n)
{
	int r, s=0, x;
	x=n;
	while(n>0)
	{
		r= n%10;
		s= s*10+ r;
		n=n/10;
	}
	if(x==s)
		return (1);
	else
		return (0);
}
int main()
{
	int n, p, next, prev, x;
	scanf("%d", &n);
	next=n;
	prev=n;
	
	while(1)
	{
		if(ispal(next++))
		{
			printf("%d",--next);
			break;
		}
		if(ispal(prev--))
		{
			printf("%d",++prev);
			break;
		}
	}
}
