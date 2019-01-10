#include<stdio.h>
#include<stdlib.h>
int main(){

	int a,b,c;
	printf("Enter two numbers");
	scanf("%d%d",&a,&b);
	printf("The numbers are %d %d", a, b);
	c=a;
	a=b;
	b=c;
	printf("The numbers are %d %d", a, b);
	return 0;
}
