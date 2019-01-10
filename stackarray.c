//stack implementation by array
#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 101
int arr[MAX_SIZE];
int top = -1;

void push(int key){
	if(top== MAX_SIZE -1)
	{
		printf("Stack overflow:");
		return;
	}
	arr[++top]=key;
}
void pop(){
	if(top==-1)
	{
		printf("Stack empty");
		return;
	}
	top--;
}
void peek()
{
	printf("%d",arr[top]);
}
int main()
{
	push(10);
	print();
	push(20);
	print();
	pop();
	print();
	push(30);
	peek();
	push(12);
	push(13);
	push(14);
	peek();
	print();
}
print(){
	int i;
	printf("Stack:");
	for(i=0;i<=top;i++)
	{
		printf("%d\n",arr[i]);
		
	}
}
