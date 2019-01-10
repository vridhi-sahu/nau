#include<stdio.h>
#include<stdlib.h>
int main()
{
	int choice, a,b,sum, sub, pro,div;
	while(1)
	{
		printf(" press 1 for summation 2 for subtraction 3 for multiplication 4 for division 5 for exit.");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Enter two numbers:");
				scanf("%d%d",&a,&b);
				sum = a + b;
				printf("The sum is %d", sum);
				break;
			case 2:
				printf("Enter two numbers:");
				scanf("%d%d", &a,&b);
				sub = a - b;
				printf("The diff is %d", sub);
				break;
			case 3: 
				printf("Enter two numbers:");
				scanf("%d%d", &a,&b);
				pro = a*b;
				printf("The product is is %d", pro);
				break;
			case 4: 
				printf("Enter two numbers:");
				scanf("%d%d", &a,&b);
				div = a/b;
				printf("The quotient is %d", div);
				break;
			case 5: exit(1);
				default : printf("invalid input");
			
		}
	} return 0;
}
