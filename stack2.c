#include<stdio.h>

int max=10;
int stack[9];
int top=1;
int i,choice;
void main();

void push()
{
if (top!=max)
{
printf("Enter a element to push on the position %d:\n",top);
scanf("%d",&stack[top]);
top++;
printf("Element sucessfully pushed..!!");
main();
}
else
printf("Stack full, please pop some elements and try again.");
main();
}

void pop()
{
if(top!=1)
{
printf("Popped the element at position %d",top-1);
top=top-1;
main();
}
else
{
printf("Stack Empty, please PUSH some elements and try again.");
main();
}
}

void display()
{
if(top!=1)
{
int di;
printf("Elements present in the stack are:");
for(di=1;di<top;di++)
{
printf("\nElement at %d position is %d",di,stack[di]);
}
main();
}
else
{
printf("Unable to display as stack is empty, please PUSH some elements and try again.");
main();
}
}

int exits()
{
printf("Exiting");
return 0;
}

void main()
{
printf("\n\n\n-------Welcome to NK7's Stack Program-------\n       Please Note the Stack limit is 10\n       Please enter your choice:\n       1.PUSH\n       2.PoP\n       3.Display the existing Stack\n       4.Exit\n\n");
scanf("%d",&choice);
switch (choice)
{
case 1:
	push();
	break;
case 2:
	pop();
	break;
case 3:
	display();
	break;
case 4:
	exits();	
	break;
default:
	printf("Invalid entry, please try again");
}

}
