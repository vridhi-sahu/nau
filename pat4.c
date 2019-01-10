#include<stdio.h>
int main()
{
	int n, i, j, k=1;
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		k=1;
		for(j=1;j<=n;j++)
		{
			while(k<=n)
			{
			printf("%d",i);
			k++;
		}
		printf("%d",j++);
		}
		printf("\n");
	}
	
}
