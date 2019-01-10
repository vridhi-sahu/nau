#include<stdio.h>
int octal(int);
int main()
{
	int decimal;
	printf("Enter the decimal number");
	scanf("%d",&decimal);
	printf("The binary number is %d", octal(decimal));
}
int octal(int decimal)
{
	int i=1,octalno=0,r;
	while(decimal!=0)
	{
	
	r=decimal%8;
	octalno += r * i;
	i =i * 10;
	decimal/=8;
	}
	return octalno;
}
