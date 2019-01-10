#include<stdio.h>
int main(){
	int secondlarge, i, n, large, arr[100];
	int secondsmall, small;
	printf("Enter the number of elements in the array:");
	scanf("%d",&n);
	printf("the elements are");
	for(i=0;i<n;i++){
	scanf("%d",&arr[i]);
	}
	large=arr[0];
	for(i=0;i<n;i++)
	{
		if(large<arr[i])
		{
			large=arr[i];
		}
	}
	secondlarge=arr[0];
	for(i=0;i<n;i++)
	{
		if(secondlarge<arr[i] && arr[i]<large)
		{
			secondlarge=arr[i];
		}
	}
	

	small=arr[0];
	for(i=0;i<n;i++)
	{
		if(small>arr[i])
		{
			small=arr[i];
		}
	}
	secondsmall=arr[0];
	for(i=0;i<n;i++)
	{
		if(secondsmall>arr[i] && arr[i]>large)
		{
			secondsmall=arr[i];
		}
	}
	
	printf("The second smallest element is %d ", secondsmall);
	printf("The second largest element is %d ", secondlarge);

}
