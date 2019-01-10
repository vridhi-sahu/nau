#include<stdio.h>
int main()
{
	int n,i,j,k,l;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			printf("6");
		}
		for(j=0;j<i;j++)
		{
			printf("5");
		}
		for(j=1;j<i;j++)
		{
			printf("5");
		}
		for(j=1;j<n-i;j++)
		{
			printf("6");
		}
		
		
		printf("\n");
	}
}
