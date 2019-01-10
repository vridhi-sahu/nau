#include <stdio.h>

int main() {
	//code
	int t, n, arr[100], i , j;
	scanf("%d", &t);
	for(i=1;i<=t;i++)
	{
		scanf("%d", &n);
		for(i=0;i<n;i++)
		{
		scanf("%d",&arr[i]);
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<n-i-1;j++)
			{
			if(arr[j+1]<arr[j])
			{
				t=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=t;
			}
			}
	}
	for(i=0;i<n;i++)
	{
		printf("%d", arr[i]);
	}
	}
	return 0;
}
