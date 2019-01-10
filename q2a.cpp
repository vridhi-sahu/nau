#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int sidea, sideb, sidec, b, area;
	printf("Enter sides of the equilateral triangle");
	scanf("%d",&sidea);
	b = sqrt(3)/4;
	area = b*sidea*sidea;
	printf("area is %d", area);
	
	
}
