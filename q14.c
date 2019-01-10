#include<stdio.h>
#include<stdlib.h>
int main ()
{
	int num, n, r, sum=0, range1, range2, t=0;
	printf("Enter range");
	scanf("%d%d",&range1,&range2);

	for(num=range1; num<range2; num++)
	{
		n=num;
		while(num>0){
		r=num%10;
		sum=sum+(r*r*r);
		num=num/10;
		}
		if(sum==n)
		{
			t++;
		}
		printf("The total number of numbers are %d", t);
	}
	return 0;
}
