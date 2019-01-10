#include<stdio.h>
int circumference(int r)
{
	return(2*3.14*r);
}
int area(int r)
{
	return(3.14*r*r);
}
int main()
{
	int a, c;
	a=area(2);
	c=circumference(2);
	printf("The area of the circle is %d",a);
	printf("The circumference of the circle is %d",c);
}
