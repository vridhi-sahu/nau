#include <stdio.h>
int main()
{
  int a,b,c;
	printf("Enter two numbers");
	scanf("%d%d",&a,&b);
  // Code to swap 'x' and 'y'
  	a = a + b;  // x now becomes 15
 	b = a - b;  // y becomes 10
  	a = a - b;  // x becomes 5
 
  printf("After Swapping: x = %d, y = %d", a, b);
 
  return 0;
}

