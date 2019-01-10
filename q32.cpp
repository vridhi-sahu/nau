#include<stdio.h>
int main(){
	int mat[100][100],i,j,n,m,sum=0;
	printf("Enter the number of rows and columns the matrix:");
	scanf("%d%d",&n,&m);
	printf("Enter the elements:");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}
	printf("The matrix is:");
	for(i=0;i<n;i++)
	{	printf("\n");
		for(j=0;j<m;j++)
		{
			printf("%d\t",mat[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(i==j)
			{
				sum += mat[i][j];
			}
		}
	}
	printf("\nThe sum of the diagonal elements of the matrix is: %d", sum);
	return 0;
}
