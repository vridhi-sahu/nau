#include<stdio.h>
#include<math.h>
int area(int a)
{
	int b, ar;
	b = sqrt(3)/4;
	ar = b*a*a;
	return(ar);
}
int main()
{
	int a, result;
	printf("Enter the side equi angle triangle");
	scanf("%d", a);
	result = area(a);
	
}

