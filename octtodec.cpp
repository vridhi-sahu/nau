#include<stdio.h>
#include<math.h>
int main(){
	int dec, oct, rem, i=0;
	scanf("%d", &oct);
	while(oct!=0)
	{
		rem=dec%10;
		dec= dec + (rem * pow(8,i));
		oct= oct/10;
		i++;
	}
	printf("%d", dec);
}
