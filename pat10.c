#include<stdio.h>
int main()
{
	int n , i, j, k,l,m, count = 1;
	scanf("%d",&m);
	if(m%2==0)
		n=m/2;
	else
		n =(m/2)+1;
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%d",count);
		}
		
		for(k=0;k<n-i-1;k++)
		{
			printf("*");
		}
		for(l=n-1;l>i+1;l--)
		{
			printf("*");
		}
		for(j=0;j<=i;j++)
		{
			printf("%d",count);
		}
		count+=2;
		printf("\n");
	}
	count-=2;
	for(i=n-1;i>0;i--)
	{
		count-=2;
		for(j=0;j<=i-1;j++)
		{
			printf("%d", count);
		}
		
		for(k=n;k>=i+1;k--)
		{
			printf("*");
		}
		for(l=n;l>i+1;l--)
		{
			printf("*");
		}
		for(j=0;j<=i-1;j++)
		{
			printf("%d", count);
		}
		printf("\n");
	}
}

