#include<stdio.h>
int main(){
	int mat1[100][100], mat2[100][100], i, j, k, r1, r2, c1, c2, mul[100][100];
	printf("enter the number of rows and columns of 1st matrix");
	scanf("%d%d",&r1,&c1);
	printf("enter the number of rows and columns of 2nd matrix");
	scanf("%d%d",&r2,&c2);
	if(c1!=r2)
	{
		printf("multiplication is not possible");
	}
	else
	{
		printf("Enter the elements of 1st matrix:");
		
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				scanf("%d",&mat1[i][j]);
			}
		}
		
		
		printf("Enter the elements of 2nd matrix:");
		
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
				scanf("%d",&mat2[i][j]);
			}
		}
		for(i=0;i<r1;i++)
			{
			for(j=0;j<c2;j++)
			{
				mul[i][j]=0;
			}
		}
		
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c2;j++)
			{
				for(k=0;k<c1;k++)
				mul[i][j]= mul[i][j] + mat1[i][k]*mat2[k][j];	
			}
		}
		printf("The matrix is:");
		for(i=0;i<r1;i++)
			{
			printf("\n");
			for(j=0;j<c2;j++)
			{
				printf("%d\t",mul[i][j]);
			}
		}
	}
}
