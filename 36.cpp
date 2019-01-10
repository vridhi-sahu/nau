#include<stdio.h>
#include<math.h>
int dec(int);
int main(){
	int bin;
	printf("Enter binary number");
	scanf("%d",&bin);
	printf("The decimal no. for binary no. %d is %d", bin, dec(bin));
	return 0;
}
int dec(int bin)
{
	int decimal=0, i=0,r;
	while(bin !=0)
	{
	r=bin%10;
	bin=bin/10;
	decimal= decimal + (r * pow(8,i));
	++i;
	}		
	return decimal;
}

