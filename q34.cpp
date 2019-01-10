#include<stdio.h>
long fact(int);
int main()
{
	int n, i, j;
	printf("Enter number of lines:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		
			printf(" ");
		
		for(j=0;j<=i;j++)
		
			printf("%ld", fact(i)/(fact(j)*fact(i-j)));
		printf("\n");
		
	}
	return 0;
}
long fact(int num)
{
	long f=1; int i=1;
	while(i<=num)
	{
		f=f*i;
		i++;
	}
	return f;
}
