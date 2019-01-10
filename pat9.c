#include<stdio.h>
int main()
{
	int n , i, j, k,l,m;
	scanf("%d",&m);
	if(m%2==0)
		n=m/2;
	else
		n =(m/2)+1;
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf(" ");
		}
		for(k=0;k<n-i;k++)
		{
			printf("7");
		}
		for(l=n-1;l>i;l--)
		{
			printf("7");
		}
		printf("\n");
	}
	for(i=n-1;i>0;i--)
	{
		for(j=0;j<=i-1;j++)
		{
			printf(" ");
		}
		for(k=n;k>=i;k--)
		{
			printf("7");
		}
		for(l=n;l>i;l--)
		{
			printf("7");
		}
		printf("\n");
	}
}

