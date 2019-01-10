//stack implementation by linked list
#include<stdio.h>
#include<stdlib.h>
typedef struct Stack{
	int data;
	struct Stack* next;
}nd;
struct Stack* top=NULL;
void push(int key){
	struct Stack* temp=(struct Stack*)malloc(sizeof(struct Stack));
	temp->data=key;
	temp->next=top;
	top=temp;
}
void pop(){
	if(top==NULL)
	{
		return;
	}
	struct Stack* temp;
	temp=top;
	top=top->next;
	free(temp);
}
void peek()
{
	printf("%d\n",top->data);
}
void print()
{
	nd* temp = top;
	while(temp->next!=NULL)
	{
		printf("%d",temp->data);
	}
}
int main(){
	push(9);
	print();
	push(6);
	print();
	push(3);
	print();
	pop();
	print();
	push(10);
	print();
	
}



