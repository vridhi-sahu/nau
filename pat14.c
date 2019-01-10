/*Input:
5
Output:
1				i=1, j=1			
3*2				i=2, j=1,2			
4*5*6			i=3, j=1,2,3		
10*9*8*7		i=4, j=1,2,3,4		
11*12*13*14*15	i=5, j=1,2,3,4,5
*/
#include<stdio.h>
int main()
{
	int i, j, n, count=0, count1=0, k=0, l=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2!=0)
		{
			count=count+l;
			for(j=1;j<=i;j++)
			{
			printf("%d",++count);
			if(i>j)
				printf("*");
			}
			l=l+2;
			
			
		}
		else
		{
			count1=count1+(2*i)+k;
			for(j=1;j<=i;j++)
			{
			printf("%d",--count1);
			if(i>j)
				printf("*");
			}
			k++;
			
		}	
		
		printf("\n");
	}
}
