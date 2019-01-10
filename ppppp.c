// Stack using linked list
#include<stdio.h>
#include<stdlib.h>
void print();

typedef struct Node{
	int data;
	struct Node* next;
}nd;
nd *top= NULL;
void push(int key)
{
	nd *temp=(nd*)malloc(sizeof(nd));
	temp->data=key;
	if(top==NULL)
	{
		temp->next= NULL;
		top=temp;
	}
	
	temp->next=top;
	top=temp;
}
void pop()
{
	nd *temp = NULL;
	temp=top;
	if( top == NULL)
	{
		printf("Empty");
	}
	else
	{
		top=top->next;
		free(temp);
	}
	
}
void peek()
{
	printf("%d",top->data);
}
int main()
{
	push(9);
	
	push(10);
	print();
	push(6);
	print();
	pop();
	print();

}
void print()
{
	nd *temp = top;
	if(top==NULL)
	{
		printf("empty");
	}
	else
	{
	while(temp!=NULL)
	{
		printf("%d",temp->data);
		temp = temp->next;
	}
}
}
