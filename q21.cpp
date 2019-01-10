#include<stdio.h>
#include<conio.h>
int main(){
	int n, i, arr[100], *ptr;
	ptr=&arr[0];
	printf("Enter the total elements in the array.\n");
	scanf("%d",&n);
	printf("Enter the elements");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("The elements in the reverse order are");
	ptr=&arr[n-1];
	for(i=n-1;i>=0;i--){
		printf(" %d\n",*ptr);
		ptr--;
	}
}
