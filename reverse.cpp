// reverse a number
#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
//main(int argc, char *argv[])
int main()
{
	int num,rev=0,n,rem=0, upper=0, lower=0;
	//num=atoi(argv[1]);
	scanf("%d",&num);
	n=num;
	while(TRUE)
	{
		while(num!=0)
		{
		rem=num%10;
		rev= (rev*10) + rem;
		num/=10;
		}
		if(rev==n)
		{
			upper=rev;
			printf("%d",upper);
			break;
		}
		else
		{
			num = n + 1;
		}	
	}
	//printf("The reverse of %d is %d",n,rev);
}
