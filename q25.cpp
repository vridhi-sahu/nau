#include<stdio.h>
int main(){
	int i, n, arr1[100], m, arr2[100], k, j, arr3[100];
	printf("Enter the number of elements in the 1st array:");
	scanf("%d",&n);
	printf("the elements are");
	for(i=0;i<n;i++){
		scanf("%d",&arr1[i]);
	}
	printf("Enter the number of elements in the 2nd array:");
	scanf("%d",&m);
	printf("the elements are");
	for(i=0;i<m;i++){
		scanf("%d",&arr2[i]);
	}
	i=0;
	j=0;
	k=0;
	while(i<n && j<m)
	{
		if(arr1[i]<arr2[j])
		{
			arr3[k]=arr1[i];
			k++;
			i++;
		}
		else
		{
			arr3[k]=arr2[j];
			k++;
			j++;
		}
	}
	while(i<n)
	{
		arr3[k]=arr1[i];
		k++;
		i++;
	}
	while(j<m)
	{
		arr3[k]=arr2[j];
		k++;
		j++;
	}
	printf("The merged array is:");
	for(i=0;i<m+n;i++)
	{
		printf("%d",arr3[i]);
	}
}
