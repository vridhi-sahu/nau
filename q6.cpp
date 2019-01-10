#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c, great, small;
	printf("Enter 3 numbers:");
	scanf("%d%d%d",&a,&b,&c);
	if((a>b && a<c) || (a>c && a<b))
	{
		printf("%d is the median",a);
	}
	else if((b>a && b<c) || (b>c && b<a))
	{
		printf("%d is the median",b);
	}
	else if((c>a && c<b) || (c>b && c<a))
	{
		printf("%d is the median",b);
	}
	else
	{
		printf("invalid");
	}
	return(0);
}

