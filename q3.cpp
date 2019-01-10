#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
area_rec()
{
	int l, b, a;
	printf("enter the sides of the rectangle");
	scanf("%d%d", &l, &b);
	a = l*b;
	printf("The area of rectangle is %d,",a);
}
int main()
{
	int ch;
	while(1)
	{
		printf("press\n 1. area of rectangle \n 2.perimeter of rectangle \n 3. area of square 4. perimeter of square 5. exit");
		printf("Enter your choice:");
		switch(ch)
		{
			case1 : area_rec();
			break;
			case2 : exit(1);
		}
	}
}
