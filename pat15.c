/*Input:
3
Output:
3 3 3	1,1  1,2  1,3
3 1 3	2,1  2,2  2,3
3 2 3   3,1  3,2  3,3 if(i!=1 && j==n-1)
3 3 3	4,1  4,2  4,3
*/
#include<stdio.h>
int main()
{
	int n, i, j, l=1;
	scanf("%d", &n);
	for(i=1;i<=n+1;i++)
	{
		for(j=1;j<=n; j++)
		{
			if(i!=1 && j==n-1)
			{
				printf("%d", l++);
			}
			else
			printf("%d", n);
		}
		printf("\n");
	}
}
