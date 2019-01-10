#include<stdio.h>
int main()
{
	int n, arr[100],arr1[100], i, j, k=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d", &arr[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		if(arr[i]==arr[j])
			{
				break;
			}
			
		}
		if(i==j)
		{
			printf("%d",arr[i]);
			k++;
		}
		printf("\n%d\n",k);
	}
}
