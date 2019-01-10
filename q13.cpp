#include<stdio.h>
#include<stdlib.h>
int main(){
	int range1, range2, flag=0, i,j,k, sum=0;
	printf("Enter the range:");
	scanf("%d%d",&range1,&range2);
	for(i=range1;i<=range2;i++)
	{	sum=0;
		for(j=2;j<=i/2;j++){
			if(i%j!=0)
			{
				sum=sum+i;
			}
		}
	
	}
	printf("sum",sum);
	return 0;
}
