#include<stdio.h>
#include<conio.h>
int main(){
	int arr[100], i , j , k , n;
	printf("Enter the no. of elements in the array");
	scanf("%d",&n);
	printf("Enter the elements in the array");
	for(i=0;i<n;i++){
	scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;){
			if(arr[j]==arr[i]){
				for(k=j;k<n;k++)
				{
					arr[k]=arr[k+1];
				}
				n--;			
			}
			else
			j++;
		}
	}
	printf("The elements are");
	for(i=0;i<n;i++){
	printf("%d\n",arr[i]);
	}
}
