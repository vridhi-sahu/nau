#include<stdio.h>
int main()
{
	int n, i, j, k=1, l, count=1, o, x, y;
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf(" ");
		}
		
		for(x=n;x>i;x--)
		{
			printf("%d*",k);
			k=++count;
		}
		/*for(j=n;j>i;j--)
		{
			o=count++;
		}
		*/
		for(y=n;y>i;y--)
		{
			o=k+(2*y-1);
			printf("%d*",o);
		}
		
	printf("\n");	
}
}
	
