#include<stdio.h>
int main()
{
	int sum=0, i, n, arr[100];
	printf("the total elements in the array");
	scanf("%d",&n);
	printf("the elements are");
	for(i=1;i<=n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=1;i<=n;i++)
	{
		if(i%2!=0)
		{
			sum = sum + arr[i];
		}
	}
	printf("The sum of odd numbers is %d", sum);
}
