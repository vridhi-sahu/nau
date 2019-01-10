#include<stdio.h>
#include<stdlib.h>
int main(){
	int range1, range2, total_even=0, total_odd=0, i, j,even=0,odd=0;
	printf("Enter the range:");
	scanf("%d%d",&range1,&range2);
	for(i=range1;i<=range2;i++)
	{
		if(i%2==0)
		{
			even++;
			total_even = total_even + i;
		}
		else
		{
			odd++;
			total_odd = total_odd + i;
		}
		
	}
	printf("total odd numbers %d", odd);
	printf("total even numbers %d", even);
	printf("total sum of odd numbers %d", total_odd);
	printf("total sum of even numbers %d", total_even);

}
