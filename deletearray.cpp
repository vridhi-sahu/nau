#include<stdio.h>
int main(){
	int loc, num, i, arr[100];
	printf("Enter the number of elements in the array.");
	scanf("%d",&num);
	printf("Enter the location of the element in the array.");
	scanf("%d",&loc);
	printf("Enter the elements in the array.");
	for(i=0;i<num;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<=num;i++){
		if(num==loc)
		{
			arr[i]=arr[i+1];

		}num--;
	}
		for(i=0;i<=num;i++)
	{
		printf("%d",arr[i]);
	}

}
