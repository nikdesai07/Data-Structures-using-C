#include<stdio.h>

int max=9;
int stack[10];
int top=0;
int i,choice;

void main();

void push()
{
if (top<=max)
	{
	printf("Enter a element to push on the position %d:\n",top+1);
	scanf("%d",&stack[top]);
	top++;
	printf("Element sucessfully pushed..!!");
	}
else
	{
	printf("Stack full, please pop some elements and try again.");
	}
}

void pop()
{
	if(top!=0)
	{
	printf("Popped the element at position %d",top);
	top=top-1;
	}
else
	{
	printf("Stack Empty, please PUSH some elements and try again.");
	}
}

void display()
{
if(top!=0)
	{
	int di;
	printf("Elements present in the stack are:");
	for(di=0;di<top;di++)
	{
	printf("\nElement at %d position is %d",di+1,stack[di]);
	}
	}
else
	{
	printf("Unable to display as stack is empty, please PUSH some elements and try again.");
	}
}

void main()
{
printf("\n\n\n-------Welcome to NK7's Stack Program-------\n     **Please Note the Stack limit is 10**\n");
begin:
printf("\n\n       Please enter your choice:\n       1.PUSH\n       2.PoP\n       3.Display the existing Stack\n       4.Exit\n\n\n");
scanf("%d",&choice);
switch (choice)
{
case 1:
	push();
	goto begin;
	break;
case 2:
	pop();
	goto begin;
	break;
case 3:
	display();
	goto begin;
	break;
case 4:
	break;
default:
	printf("Invalid entry, please try again");
	goto begin;
}
}
