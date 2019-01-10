#include<stdio.h>
#include<stdlib.h>
void create();
void insert_end();
void display();
void min();
	typedef struct node{
	int data;
	struct node *link;
}nd;
nd *root=NULL;
void main()
{int v,w,x,ch;
	while(1)
{ 
printf(" Enter choise \n 1 : create\n 2 : insert at end\n 3 : display\n 4 : display min, max and max-min\n");
scanf("%d",&ch);
switch(ch)
{
case 1: create();
break;
case 2: insert_end();
break;
case 3: display();
break;
case 4: min();
break;
case 5: exit(1);

default: printf("wrong choise!");
}
}
}



void create()
{ nd *fn; int a;
fn=(nd*)malloc(sizeof(nd));
printf("Enter data of fn:");
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

void min()
{
	int small=9999; nd *p1; 
	
	int large=-9999;
	nd *p2;
	
	
	while(p1->link==NULL)
	{
	
	if(p1->data<small)
		{
			small=p1->data;
		}
		p1=p1->link;
	}
	printf("The min no. is %d",small);

	while(p2->link==NULL)
	{
		if(p2->data>large)
		{
			large=p2->data;
		}
		p2=p2->link;
	}
	printf("The min no. is %d",large);
	
	printf("MAX-MIN=%d",large-small);
}
