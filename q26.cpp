#include<stdio.h>
int main(){
	int arr[100], i, n, key, found;
	printf("Enter the number of elements in the array");
	scanf("%d",&n);
	printf("The elements are");
	for(i=1;i<n+1;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter element to be searched:");
	scanf("%d",&key);
	for(i=1;i<n+1;i++)
	{
		if(arr[i]==key)
		{
			found=i;
			break;
		}
	}
	printf("The element %d is present in %d position", key, found);

}
