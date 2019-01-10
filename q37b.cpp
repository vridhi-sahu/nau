#include<stdio.h>
int binary(int*);
int main()
{
	int decimal;
	printf("Enter the decimal number");
	scanf("%d",&decimal);
	printf("The binary number is %d", binary(&decimal) );
}
int binary(int *decimal)
{
	int i=1,binaryno=0, r;
	while(*decimal != 0)
	{
		r = *decimal % 2;
		binaryno +=  r * i;
		*decimal/=2;
		i = i * 10;
	}
	return binaryno;
}
