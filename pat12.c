/*Input :
3
Output:
1
2*2
3*3*3
3*3*3
2*2
1
*/
#include<stdio.h>
int main()
{
	int i, j, n, c;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i>j || i==j)
			{
				printf("%d",i);
				if(i>j)
				{
					printf("*");
				}
			}
		}
		printf("\n");
	}
	
	for(i=1, c=n;i<=n;i++, c--)
	{
		for(j=n;j>=1;j--)
		{
			if(i<j || i==j)
			{
				printf("%d",c);
				if(i<j)
				{
					printf("*");
				}
			}
		}
		printf("\n");
	}
}
