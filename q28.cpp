#include<stdio.h>
int main()
{
	int mat1[100][100], mat2[100][100], sum[100][100], i, j, n, m;
	printf("Enter the number of rows and columns of the matrix:");
	scanf("%d%d",&m,&n);
	printf("The 1st matrix is");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&mat1[i][j]);
		}
	}
	printf("The 2nd matrix is");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&mat2[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			sum[i][j]=mat1[i][j]+mat2[i][j];
		}
	}
	printf("The sum matrix is");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("\t%d\t",sum[i][j]);
		}printf("\n");
	}
}
