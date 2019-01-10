#include<stdio.h>
int main()
{
	int n, i , j, k=3;
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%d", k);
		}
		k=k+1;
		printf("\n");
	}
	k--;
	for(i=n-1;i>0;i--)
	{
		k--;
		for(j=0;j<i;j++)
		{
			printf("%d", k);
		}
		printf("\n");
	}
}
