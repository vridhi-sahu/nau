#include<stdio.h>
int main(){
	int arr1[100][100], arr2[100][100], i, j, n, m;
	printf("Enter the number of rows and columns of matrix");
	scanf("%d%d",&n, &m);
	printf("Enter the elements:");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&arr1[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{	printf("\n");
		for(j=0;j<m;j++)
		{
			printf("%d\t",arr1[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			arr2[i][j]=arr1[j][i];
		}
	}
	printf("The transpose of the matrix is:");
	for(i=0;i<n;i++)
	{	printf("\n");
		for(j=0;j<m;j++)
		{
			printf("%d\t",arr2[i][j]);
		}
	}
}
