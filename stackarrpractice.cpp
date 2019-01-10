#include<stdio.h>
#include<math.h>
#define MAX 101
int pop(int arr[]);
void push(int arr[], int key);
int peek(int arr[]);
void print(int arr[]);
int arr[MAX], top=-1;
int main()
{
	int key, ch;
	do
	{
		printf("Enter choice 1:pop 2:peek 3:push 4: print\n");
		scanf("%d",ch);
		switch(ch)
		{
			case 1 :key = pop(arr);
					printf("%d is the popped element",key);
					break;
			case 2 :key = peek(arr);
					break;
			case 3 :printf("Enter element");
					scanf("%d", &key);
					push(arr, key);
					break;
			case 4 :print(arr);
					break;
			default : printf("Wrong choice");
		}
	}while(ch!=5);
}
void push(int arr, int key)
{
	if(top == MAX)
	{
		printf("stack overflow");
	}
	else
	{
		arr[++top]=key;
	}
}
int pop(int arr)
{
	int key;
	if(top == -1)
	{
		printf("Empty");
	}
	else
	{
		key=arr[top];
		top--;
		return key;
	}
}
void peek(int arr)
{
	printf("%d",arr[top]);
}
void print(int arr)
{
	int i;
	for(i=0;i<=top;i++)
	{
		printf("%d",arr[i]);
	}
}

