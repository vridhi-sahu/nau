#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c, great, small;
	printf("Enter 3 numbers:");
	scanf("%d%d%d",&a,&b,&c);
	great = (a>b?a:b)>c?(a>b?a:b):c;
	small = (a<b?a:b)<c?(a<b?a:b):c;
	printf("The greatest number is %d",great);
	printf("The smallest number is %d",small);

}
