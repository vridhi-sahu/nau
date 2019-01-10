#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
	int grades[20], names[20], i,j , sum=0, avg, high=0,n;
	if(argc!=41)
	{
		printf("not sufficient arguments:");
	}
	for(i=0;i<=20;i++)
	{
		grades[i]= atoi(argv[i]);
	}
	
	for(i=0;i<=20;i++)
	{
		sum = sum + grades[i];
	}
	avg=sum/20;
	for(i=0;i<=20;i++)
	{
		if(high<grades[i])
		{
			high=grades[i];
			n=i;
		}
	}
	printf("the average marks is %d. The highest marks is %d by %s",avg,high,argv[n+20]);
}
