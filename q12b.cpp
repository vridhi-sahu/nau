#include<stdio.h>
int main(){
	int num, i , fact=1;
	printf("Enter number:");
	scanf("%d",&num);
	if(num==0){
		printf("1");
	}
	else{
		for(i=1;i<=num;i++)
		{
			fact=fact*i;
		}
		printf("the factorial of the number %d is %d",num,fact);
	}
	return 0;
}


