#include<stdio.h>
#include<stdlib.h>
int main()
{
	int oct, dec, i=1, n, rem ;
	
	scanf("%d",&dec);
	n=dec;
	while(n!=0)
	{
		rem=dec%8;
		oct=oct+(rem * i);
		
		dec=dec/8;
		i=i*10;
	}
	printf("%d",oct);
}
