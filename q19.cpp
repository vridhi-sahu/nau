#include<stdio.h>
#include<stdlib.h>
int main(){
	int num, i, r, sum=0;
	printf("Enter the number");
	scanf("%d",&num);
	for(i=1;i<(num-1);i++)
	{
		r=num%i;
		if(r==0){
			sum=sum + i;
		}
	}
	if(sum==num){
		printf("The number %d is a perfect number", num);
	}
	else
	{
		printf("The number %d is not a perfect number", num);
	}
}
