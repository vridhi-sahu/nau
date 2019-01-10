/*Input:
4
Output:
1
2*3
4*5*6
7*8*9*10
7*8*9*10
4*5*6
2*3
1

*/
#include<stdio.h>
int main()
{
	int i, j, n, c, count=1, count2;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i>j || i==j)
			{
				printf("%d",count++);
				if(i>j)
				{
					printf("*");
				}
			}
		}
		printf("\n");
	}
	count2= count - n;
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=n;j++)
		{
			if(i>j || i==j)
			{
				printf("%d",count2++);
				if(i>j)
				{
					printf("*");
				}
			}
			
		}
		count2=(count2+1)-2*i;
		printf("\n");
	}
}
