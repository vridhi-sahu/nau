#include<stdio.h>
float celcius(float*);
float fahrenheit(float*);
float celcius(float *fah)
{
	float cel;
	cel = ((*fah - 32)*5)/9;
	return cel;
}

float fahrenheit(float *cel)
{
	float fah;
	fah = ((*cel * 9)/5) + 32;
	return fah;
}

int main()
{
	float fah, cel;
	printf("Enter temp in fahrenheit:");
	scanf("%f",&fah);
	printf("The tempertaure in celcius is: %f", celcius(&fah));
	
	printf("\nEnter temp in celcius:");
	scanf("%f",&cel);
	printf("\nThis tempertaure in celcius is: %f", fahrenheit(&cel));

}
