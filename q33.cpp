#include<stdio.h>
int main()
{

	int a[100][100],i,j,n,m,det=0, inverse=0;
	printf("Enter the number of rows and columns the matrix:");
	scanf("%d%d",&n,&m);
	printf("Enter the elements:");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("The matrix is:");
	for(i=0;i<n;i++)
	{	printf("\n");
		for(j=0;j<m;j++)
		{
			printf("%d\t",a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			det = det + ( a[0][i] * ( ( a[1][(i+1)%3] * a[2][(i+2)%3]) - (a[1][(i+2)%3] * a[2][(i+1)%3])  ));
		}
	}
	printf("\nThe determinant is %d", det);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			inverse= inverse + ( (a[(i+1)%3][(j+1)%3] * a[(i+1)%3][(j+1)%3]) - (a[(i+1)%3][(j+1)%3] * a[(i+1)%3][(j+1)%3] ))/det ;
		}
	}
	printf("The inverse is %d", inverse);
}
