#include<stdio.h>
int main()
{
	int l, u, n, i, j, count=0, r;
	printf("num and upper and lower bound");
	scanf("%d %d %d", &n, &u, &l);
	i=l+1;
	while(i<u)
	{
		j=i;
		while(j!=0)
		{
			r=j%10;
			if(r==n)
			{
				count++;
			}
			j=j/10;
			
		}
		i++;
	}
	printf("%d",count);
}
