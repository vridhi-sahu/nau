#include<stdio.h>
int main(){
	int arr[100], i, n, key, found;
	printf("Enter the number of elements in the array");
	scanf("%d",&n);
	printf("The elements are");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter element to be searched:");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(arr[i]=key)
		{
		printf("The element %d is present in %d position", key, i++);
		}
	}
	
}
