#include<stdio.h>
#include<stdlib.h>
void create();
void insert_end();
void display();
typedef struct node{
	int data;
	struct node *link;
}nd;
nd *root=NULL;
void main()
{
int ch;
while(1)
{ 
printf(" Enter choise \n 1 : create the 1st node\n 2 : keep inserting the next node\n 3 : display nodes\n");
scanf("%d",&ch);
switch(ch)
{
case 1: create();
break;
case 2: insert_end();
break;
case 3: display();
break;
case 4: exit(1);

default: printf("wrong choise!");
}
}
}
void create()
{ nd *fn; int a;
fn=(nd*)malloc(sizeof(nd));
printf("Enter data of 1st created node:");
scanf("%d",&a);
fn->data=a;
fn->link=NULL;
root=fn;
}
void insert_end()
{
	nd *temp;
	nd *en; int a;
	en=(nd*)malloc(sizeof(nd));
	printf("Enter data of next node:");
	scanf("%d",&a);
	en->data=a;
	temp=root;
	while(temp->link!=NULL)
	{
		temp=temp->link;
	}
	temp->link=en;
	en->link=NULL;
}
void display()
{
	nd *temp;
	if (root==NULL)
	{
		printf("empty");
	}
else
{
	temp=root;
	while(temp!=NULL)
	{
		printf("%d",temp->data);
		temp=temp->link;
	}
}
}
